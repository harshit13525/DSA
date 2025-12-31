#include <iostream>
using namespace std;

class Stack
{
private:
    int *array , capacity , top , size;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        array = new int[capacity];
        top = -1;
        size = 0;
    }

    void push(int element)
    {
        if (size == capacity)
        {
            cout << endl << "\t---------- Stack Overflow ----------" << endl;
        }
        else
        {
            top++;
            array[top] = element;
            size++;
            cout << endl << "Element added successfully" << endl;
        }
    }

    void pop()
    {
        if (size == 0)
        {
            cout << endl << "\t---------- Stack Underflow ----------" << endl;
        }
        else
        {
            cout << "Removed element: " << array[top] << endl;
            top--;
            size--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << endl << "\t----- Stack is Empty -----" << endl;
        }
        else
        {
            cout << "Top element = " << array[top] << endl;
        }
    }

    void isEmpty()
    {
        if (size == 0)
            cout << endl << "Yes , Stack is Empty" << endl;
        else
            cout << endl << "No , Stack is not Empty There Is Some Elements ." << endl;
    }

    void isFull()
    {
        if (size == capacity)
            cout << endl << "Yes , Stack is Full" << endl;
        else
            cout << endl << "No , Stack is not Full but There Is Some Elements ." << endl;
    }

    void display()
    {
        if (size == 0)
        {
            cout << endl << "\t----- Stack is Empty -----" << endl;
            return;
        }

        cout<<endl << "Stack elements : "<<endl ;
        cout<<"--------------------------------"<<endl;
        for (int i = top; i >= 0; i--)
        {
            cout<<"| "<< array[i]<<" |" << endl;
        }
    }   
};

int main()
{
    int size=0 , choice;
    cout<<endl << "Enter size OR capacity for Stack: ";
    cin >> size;   
    Stack stack(size);

    do
    {
        cout << endl;
        cout << "1. Add Element " << endl;
        cout << "2. Remove Top Element " << endl;
        cout << "3. Get Top Element " << endl;
        cout << "4. Check Stack is Empty OR Not " << endl;
        cout << "5. Check Stack is Full OR Not " << endl;
        cout << "6. Display All Elements of stack " << endl;
        cout << "7. Exit " << endl;

        cout<<endl << "\tEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int element;
            cout<<endl << "Enter value : ";
            cin >> element;
            stack.push(element);
            break;
        }

        case 2:
            stack.pop();
            break;

        case 3:
            stack.peek();
            break;

        case 4:
            stack.isEmpty();
            break;

        case 5:
            stack.isFull();
            break;

        case 6:
            stack.display();
            break;

        case 7:
            cout << endl << "\tProgram exited successfully..........." << endl;
            cout<< endl<<" ";
            break;

        default:
            cout << endl << "\tInvalid choice, try again :)" << endl;
        }

    } while (choice != 7);

    return 0;
}