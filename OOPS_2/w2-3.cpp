/* Write a program to checks whether a year (integer) entered by the user is a  leap year or not. Using if...else Ladder */

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year to check : ";
    cin>>year;
     if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        cout<<"The year is leap year:";
     }
     else{
        cout<<"The year is NOT a leap year";
     }
    
    return 0;
}