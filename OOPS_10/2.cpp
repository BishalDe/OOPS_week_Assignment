//Write a C++ program to catch default exception for any given condition.

#include <iostream>
using namespace std;

int main(){

    int x=-1;
    cout<<"Before trying..!\n";
    try{
        cout<<"Inside Tryning!\n";
        if(x<0){
            throw x;
        }
    }
    catch(int x){
        cout<<"Exception Caught..!\n";
    }
    return 0;
}