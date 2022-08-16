/*
Write a C++ program that accepts a string and calculate the lettersber of digits and letters.

Sample Data : SRMIST  2022

Expected Output :
Letters 6
Digits 4

*/

#include <iostream>
using namespace std;
int main()
{
    int b, i, j;
    int digits = 0;
    int letters = 0;
    string a;
    cout << "Enter The Sentence : ";
    cin >> a;
    string c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string n = "1234567890";
    b = a.length();
    for (i = 0; i <= b; i++)
    {
        for (j = 0; j <= 48; j++)
        {
            if (a[i] == c[j])
            {
                digits += 1;
            }
        }
        for (j = 0; j < 10; j++)
        {
            if (a[i] == n[j])
            {
                letters += 1;
            }
        }
    }
    cout << "No Of Digits Are : " << digits << endl;
    cout << "No Of letters Are : " << letters;

    return 0;
}