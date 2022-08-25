/*
Write a  C++ program to find numbers between 100 and 400 (both included) where each digit of a number is an even number. The numbers obtained should be printed in a comma-separated sequence.
*/

#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,i=100;
    while (i<401){
        a=i%10;
        b=i/10;
        c=b%10;
        d=b/10;
        if((a%2==0)&&(c%2==0)&&(d%2==0)){
            cout<<i<<",";
        }
        i++;
    }
 return 0;
}