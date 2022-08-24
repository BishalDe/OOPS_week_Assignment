/* Write a C++ program to print whether the given number is positive  number or negative number. */

#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "Enter a number : ";
    cin >> num;
    if (num > 0)
        cout << "The number is positive";
    else if (num < 0)
        cout << "The number is negative";
    return 0;
}