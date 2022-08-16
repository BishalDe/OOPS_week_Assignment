/*
Write a C++ program that accepts a word from the user and reverse it. ( should not use any functions)
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int len, i;
    cout << "Enter The String To Be Reverse : ";
    cin >> str;
    len = str.length();
    for (i = len; i >= 0; i--)
    {
        cout << str[i];
    }
    return 0;
}