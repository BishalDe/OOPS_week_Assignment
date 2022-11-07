// 9. Write a C++ program to illustrate overloading of template function using an explicit function.

#include <iostream>
using namespace std;

template<typename T>
void display(T X){
    cout<<"Displaying Template : "<<X<<endl;
}
void display(int X){
    cout<<"Explicit Display : "<<X<<endl;
}

int main(){
    display(200);
    display("B");
    display(69.96);

    return 0;
}

