/*
Write a C++ program that take a number from user then output the power of this number.
 Enter a number: 4
The power: 1
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, power;
    cout << "Enter The Number : ";
    cin >> number;
    cout << "Enter The Power : ";
    cin >> power;

    cout << pow(number, power) << endl;

    return 0;
}
