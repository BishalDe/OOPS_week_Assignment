/*
Write a C++  program to sum of two given integers. However, if the sum is between 105 to 200 it will return 200.
*/

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, Result;
    cout << "Enter First Integer : ";
    cin >> n1;
    cout << "Enter Second Integer : ";
    cin >> n2;
    Result = (n1+ n2);
    if ((105 < Result) && (200 > Result))
    {
        cout << 200;
    }
    else
    {
        cout << Result;
    }

    return 0;
}