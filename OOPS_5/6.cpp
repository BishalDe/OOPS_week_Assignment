//Write a C++ program to Swap variables using Function Overloading
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b)
{
    float temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a,b;
    float c,d;
    char e,f;
    cout<<"Enter the two integer :";
    cin>>a>>b;
    cout<<"Enter the two Float :";
    cin>>c>>d;    
    cout<<"Enter the two Character :";
    cin>>e>>f;

    cout<<endl;
    cout<<"After swaping :-";
    cout<<endl;

    swap(a,b);
    cout<<"The two integers are "<<a<<" and "<<b<<endl;
    swap(c,d);
    cout<<"The two Float are "<<d<<" and "<<d<<endl;
    swap(e,f);
    cout<<"The two Character are "<<e<<" and "<<f<<endl;
    return 0;
}