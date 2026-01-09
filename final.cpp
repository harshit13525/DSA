#include<iostream>
using namespace std;

class Queue
{
private:
    int *arr , front , rear , size , capacity;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1 , this->rear = -1 , this->size = 0;
    }

    void enqueue(int value)
    {
        if(this->rear == this->capacity - 1)
        {
            cout << "Queue is Full" << endl;
        }
        else if(this->front == -1 && this->rear == -1)
        {
            this->front = 0 , this->rear = 0;
            this->arr[this->rear] = value;
            this->size++;
            cout << "\tValue Added successfully" << endl;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = value;
            this->size++;
            cout << "\tValue Added successfully" << endl;
        }
    }

    void dequeue()
    {
        if(this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else if(this->front == this->rear)
        {
            this->front = -1 , this->rear = -1;
            this->size--;
            cout << "\tValue Removed successfully" << endl;
        }
        else
        {
            this->front++ , this->size--;
            cout << "\tValue Removed successfully" << endl;
        }
    }

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "queue is empty\n";
    }
    else
    {
        cout << "queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
    void updateByValue(int oldValue, int newValue)
    {
        for(int i = this->front; i <= this->rear; i++)
        {
            if(this->arr[i] == oldValue)
            {
                this->arr[i] = newValue;
                cout << "\tValue updated successfully" << endl;
                return;
            }
        }
        cout << "\tValue not found" << endl;
    }

    void bubbleSort()
    {
        if(this->size <= 1)
        {
            cout << "Not enough elements to sort" << endl;
            return;
        }

        for(int i = this->front; i < this->rear; i++)
        {
            for(int j = this->front; j < this->rear - (i - this->front); j++)
            {
                if(this->arr[j] > this->arr[j + 1])
                {
                    int temp = this->arr[j];
                    this->arr[j] = this->arr[j + 1];
                    this->arr[j + 1] = temp;
                }
            }
        }
        cout << "\tQueue sorted successfully" << endl;
    }
};

int main()
{
    int capacity;
    cout << "Enter the capacity of queue: ";
    cin >> capacity;

    Queue queue(capacity);
    int choice;

    do
    {
        cout << endl<< endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Update by Value" << endl;
        cout << "5. Bubble Sort" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int value;
                cout <<endl<< "Enter value: ";
                cin >> value;
                queue.enqueue(value);
                break;
            }

            case 2:
                queue.dequeue();
                break;

            case 3:
                queue.display();
                break;

            case 4:
            {
                int oldVal, newVal;
                cout <<endl<< "Enter old value: ";
                cin >> oldVal;
                cout << "Enter new value: ";
                cin >> newVal;
                queue.updateByValue(oldVal, newVal);
                break;
            }

            case 5:
                queue.bubbleSort();
                break;

            case 6:
                cout << "\tExiting......." << endl;
                break;

            default:
                cout << "\tInvalid choice , Try again" << endl;
        }

    } while(choice != 6);

    return 0;
}