/* Write C++ program to find if an integer is positive, negative or zero //  using nested if statements  */

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num >= 1)
        cout << "The number is POSITIVE";
    if (num < 1)
    {
        if (num == 0)
        {
            cout << "The number is ZERO";
        }
        else
        {
            cout << "The number is NEGATIVE";
        }
    }
    return 0;
}