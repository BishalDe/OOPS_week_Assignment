/*Write a program using recursive function to find factorial of given number. */

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int number = 1;
    cout << "Enter The Number : ";
    cin >> number;
    cout << "The Factorial is : " << factorial(number);
    return 0;
}

int factorial(int number)
{
    if (number > 1)
        return number * factorial(number - 1);
    else
        return 1;
}