//Write a C++ Program to Compare Two Strings using Overloading.

#include <iostream>
#include <cstring>

using namespace std;
class Str{
    public:
        string s;
        Str(){
           cout<<"Enter The string : ";
           cin>>s;
        }
};
int main()
{   Str s1,s2;
    if(s1.s==s2.s)
        cout<<"Same";
    else
        cout<<"Not Same";
    
    return 0;
}
