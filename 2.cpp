
/*
Write a C++ program to find those numbers which are divisible by 8 and multiple of 5, between 1000 and 2000 (both included)
*/

#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num;
        cout << "Enter the number : ";
        cin >> num;
        if (num >= 1000 && num <= 2000)
        {
            if ((num % 8 == 0) && (num % 5 == 0))
            {
                cout << "The number is divisible by 8 and is multiple of 5";
            }
            else
            {
                cout << "The number is 'NOT' divisible by 8 and is multiple of 5";
            }
        }
        else
        {
            cout << "The number is NOT in between 1000 and 2000";
        }
        char ch;
        cout << "\nWant To Retry?{Y/N} : ";
        cin >> ch;
        if (ch != 'Y')
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}