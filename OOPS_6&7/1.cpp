// 1. Write a C++ Program to Compare Two Strings using binary operator overloading.

#include <iostream>
#include <cstring>
using namespace std;

class StrComp{    
    
    public:
        string str;
        void getValue(){
            cin>>str;
        }

        void operator == (StrComp s){
            if (str==s.str){
                cout <<"\nThe Strings are Equal"<<endl;
            }
            else{
                cout <<"\nThe Strings are NOT Equal"<<endl;
            }
        }
};

int main(){

    StrComp s1, s2;
    cout << "Enter first string : ";
    s1.getValue();
    cout << "Enter second string : ";
    s2.getValue();
    s1 == s2;
    return 0;
}