// 2.	Pop element 9, 1, 5 from the stack using array implementation.

#include <iostream>
using namespace std;

#define Capacity 1000

int size = 0;
int stack[Capacity];

void push(int val)
{
    if (size == Capacity - 1)
    {
        cout << "OVERFLOW..!" << endl;
    }
    else
    {
        stack[size] = val;
        size++;
    }
}

int popelelement(int val)
{
    int flag = 0;
    if (size == 0)
        cout << "UNDERFLOW..!" << endl;
    else
    {
        for (int i = size - 1; i >= 0; i--)
        {
            if (stack[i] == val)
            {
                for (int j = i; j < size; j++)
                {
                    stack[j] = stack[j + 1];
                }
                size--;
                flag = 1;
                return val;
            }
        }
        if (flag == 1)
            return -1;
    }
}

void display()
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(10);push(30);push(60);push(5);push(1);push(80);push(9);
    display();
    popelelement(9);popelelement(1);popelelement(5);
    display();
    return 0;
}