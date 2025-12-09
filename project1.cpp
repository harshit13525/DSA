#include<iostream>
using namespace std;

void printArray(int arry[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arry[i]<<" ";
    }
}

void BubbleSort(int arry[], int size)
{
    int pass = 1;

    while(pass < size)
    {
        for(int i=0; i<size; i++)
        {
            if(arry[i] > arry[i+1])
            {
                int temp = arry[i];
                arry[i] = arry[i+1];
                arry[i+1] = temp;
            }
        }
        pass++;
    }
}

void InsertionSort(int arry[], int size)
{
    for(int i = 1; i<size; i++)
    {
        int key = arry[i];
        int j = i-1;

        while(j>=0 && key<arry[j])
        {
            arry[j+1] = arry[j];
            j--;
        }
        arry[j+1] = key;
    }
}

void SelectionSort(int arry[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(arry[j] < arry[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arry[minIndex];
        arry[minIndex] = arry[i];
        arry[i] =  temp;

    }
}

int main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    cout<<endl;

    int arry[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter value at index "<<i<<": ";
        cin>>arry[i];
    }

    cout<<endl<<"Original Array :-  ";
    printArray(arry, size);
    cout<<endl;

    int choise;
    
    cout<<endl<<"1). for Bubble sort ";
    cout<<endl<<"2). for Insertion sort ";
    cout<<endl<<"3). for Selection sort ";
    
    cout<<endl<<endl<<"Select Any Sorting Technique : ";
    cin>>choise;
    
    switch (choise)
    {
    case 1:
        BubbleSort(arry, size);
        cout<<endl<<"\tArray Sorted using Bubble sort : ";
        break;
    case 2:
        InsertionSort(arry, size);
        cout<<endl<<"\tArray Sorted using Insertion sort : ";
        break;
    case 3:
        SelectionSort(arry, size);
        cout<<endl<<"\tArray Sorted using Selection sort : ";
        break;
    default:
        break;
    }

    printArray(arry,size);


    return 0;
}