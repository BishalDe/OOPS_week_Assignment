// 3. Write a program to define the function template for swapping two items of the various
// data types such as integer, float and characters.

#include <iostream>
using namespace std;

template <class T>
void swapp(T a, T b){
    T c=a;
    a=b;
    b=c;
    cout<<"After SWAPING the values are : "<<a<<" "<<b<<endl;
}

int main()
{
    int a=10,b=20;
    swapp(a,b);
    float c=11.5,d=20.5;
    swapp(c,d);
    return 0;
}