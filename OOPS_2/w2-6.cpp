/* Write a program to find the prime numbers between 100 to 500. */

#include <iostream>
using namespace std;
int main()
{
    int number = 101;
    while (number < 500)
    {
        int flag = 0;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << number << ",";
        }
        number++;
    }
    return 0;
}