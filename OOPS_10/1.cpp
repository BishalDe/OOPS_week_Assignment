//1. Write a C++ program to demonstrate throw an exception for division by zero condition.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a=5,b=0;
    try
    {
        if (b != 0)
        {
            float div = (float)a/b;
            if (div < 0)
                throw 'e';
            cout << "a/b = " << div;
        }
        else
            throw b;
            
    }
    catch (int e)
    {
        cout << "Exception: Division by zero error ";
    }
    catch(...)
    {
        cout << "Exception: Unknown";
    }
    getch();
    return 0;
}