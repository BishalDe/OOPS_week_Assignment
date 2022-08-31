/*
Write function that take a string then reverse it.
Sample String: "1234abcd" Expected Output: "dcba4321
*/

#include <iostream>
#include <string>
using namespace std;

void reverse(){
    string str;
    int len, i;
    cout << "Enter The String To Be Reverse : ";
    cin >> str;
    len = str.length();
    for (i = len; i >= 0; i--)
    {
        cout << str[i];
    }
}
int main()
{
    reverse();
    return 0;
}