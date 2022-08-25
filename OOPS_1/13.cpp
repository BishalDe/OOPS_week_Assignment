/*
Write a C++ program to convert month name to a number of days
*/

#include <iostream>
using namespace std;
int main()
{
    string month;
    cout << "Enter The Month : ";
    cin >> month;
    if ((month == "january") || (month == "march") || (month == "may") || (month == "july") || (month == "august") || (month == "october") || (month == "december"))
    {
        cout << "31 Days";
    }
    else if ((month == "april") || (month == "june") || (month == "september") || (month == "november"))
    {
        cout << "30 Days";
    }
    else if (month == "february")
    {
        cout << "28/29 days";
    }
    else
    {
        cout << "Enter Proper Month";
    }
    return 0;
}