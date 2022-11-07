// 4. Write a program to define the function template for calculating the square of given
// numbers with different data types.

#include<iostream>
using namespace std;

template <class S>
void square(S num1)
{
    cout<<"The square of the number is :"<<num1*num1<<endl;
}

int main()
{
    int num1=10;
    square(num1);
    float num2=5.5;
    square(num2);
    return 0;
}
