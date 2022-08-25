/*
Write a C++ program to construct the following pattern, using a nested loop number.
Expected Output:
999999999
88888888
7777777
666666
55555
4444
333
22
1
*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, a = 9;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j <= a)
            {
                cout << a;
            }
        }
        cout << "\n";
        --a;
    }
    return 0;
}