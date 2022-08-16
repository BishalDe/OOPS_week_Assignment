/*
Write a  C++ program to check the validity of password input by users.
Validation :
●	At least 1 letter between [a-z] and 1 letter between [A-Z].
●	At least 1 number between [0-9].
●	At least 1 character from [$#@].
●	Minimum length 6 characters.
●	Maximum length 16 characters.
Sample output
Input your password srmist@2017
Not a Valid Password
Input your password Srmist@2022
Valid Password
*/

#include <iostream>
using namespace std;
int main()
{
    string pass, a, b, c, d;
    int e, i, j, sa = 0, ca = 0, n = 0, sc = 0;
    cout << "Enter The Password : ";
    cin >> pass;
    a = "abcdefghijklmnopqrstuvwxyz";
    b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    c = "1234567890";
    d = "$#@";
    e = pass.length();
    if ((6 <= e) && (16 >= e))
    {
        for (i = 0; i < e; i++)
        {
            for (j = 0; j < 25; j++)
            {
                if (pass[i] == a[j])
                {
                    sa += 1;
                }
            }
            for (j = 0; j < 25; j++)
            {
                if (pass[i] == b[j])
                {
                    ca += 1;
                }
            }
            for (j = 0; j < 10; j++)
            {
                if (pass[i] == c[j])
                {
                    n += 1;
                }
            }
            for (j = 0; j < 10; j++)
            {
                if (pass[i] == d[j])
                {
                    sc += 1;
                }
            }
        }

        if ((0 < sa) && (0 < ca) && (0 < n) && (0 < sc))
        {
            cout << "Valid password";
        }

        else
        {
            cout << "Not a valid password";
        }
    }
    else{
        cout << "Not a valid password";
    }

    return 0;
}