// 6. Write a program to illustrate how to define and declare a class template for reading two
// data items from the keyboard and to find their sum.

#include <iostream>
using   namespace std;

template<class T1,class T2>
void sum(T1 a, T2 b) {
    cout<<"sum = "<<a+b<<endl;
}
int main(){
    int a,b;
    float x,y;
    cout<<"Enter Two Integer Value : ";
    cin>>a>>b;
    sum(a,b);
    cout<<"Enter Two Float Value : ";
    cin>>x>>y;
    sum(x,y);

    return 0;
}