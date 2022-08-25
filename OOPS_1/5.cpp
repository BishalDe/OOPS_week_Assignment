/*
Write function that take a string then reverse it.
Sample String: "1234abcd" Expected Output: "dcba4321
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