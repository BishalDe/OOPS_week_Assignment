// 7. Write a C++ program to demonstrate re throw exception within exception handler.

#include <iostream>
using namespace std;

void exceptionFunction(){
    try{
        throw 0;
    }
    catch(int i){
        cout<<"\n In Function : Wrong Input..! "<<i;
        throw 1;
    }
}

int main(){
    int v=0;
    try{
        exceptionFunction();
    }
    catch(int x){
        cout<<"\n In Main : Wrong Input..! "<<x;
    }
    return  0;
}