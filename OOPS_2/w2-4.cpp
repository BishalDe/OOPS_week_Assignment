/*Write C++ program to find the sum of positive numbers, if the user enters  a negative numbers, break ends the loop the negative number entered is not  added to sum. */

#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    while(true){
        cout<<"Enter a number to be added : ";
        cin>>num;
        if (num<0){
            break;
        }
        sum+=num;
        }
    cout<<"The sum is : "<<sum;
    return 0;
}