//1. Write a Function Template in C++ to perform sorting of n items. The items can be of type int, float, etc.,

#include <iostream>
using namespace std;

template<class T>
void sortt(T a[],int n){

    for(int i=0;i<n;i++){
        for(int j=n-1;i<j;j--){ 
            if(a[j]<a[j-1])
                swap(a[j],a[j-1]);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>  a[i];
    }
    sortt<int>(a,n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}