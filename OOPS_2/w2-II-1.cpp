/* Write a C++ program to find the largest element of a given array of integers  */

#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter The Length Of Array : ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter The Element : "<<"a["<<i<<"] ";
        cin>>a[i];
    }

    int biggest=a[0];
    for (i=1;i<n;i++){
        if(a[i]>biggest){
            biggest=a[i];
        }
    }
    cout<<"The largest Element Is : "<<biggest;
    return 0;
}