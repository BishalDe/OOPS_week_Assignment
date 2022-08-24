/* 10. Write a program using functions to implement Fibonacci series. */

#include <iostream>

using namespace std;

int main(){
    int n,first=0,second=1,third;
    cout<<"Enter The Number : ";
    cin>>n;
    n-=2;
    cout<<first<<" "<<second;
    while(n--){
        third=first+second;
        first=second;
        second=third;
        cout<<" "<<third;
    }
    return 0;
}