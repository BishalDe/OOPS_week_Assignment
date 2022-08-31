
#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size; ++step)
    {
        for (int i = 0; i < size - step; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    cout<<"Second Lowest Number : "<<array[1]<<endl;
    cout<<"Largest Number : "<<array[size-1]<<endl;
}



int main()
{
    int n;
    cout << "Total Number Of element : ";
    cin >> n;
    int data[n];
    for (int i = 0; i < n; ++i)
        cin >> data[i];
    bubbleSort(data, n);
}