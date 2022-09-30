// 3. Write a C++ program to Swap variables using binary operator overloading.

#include<iostream>
using namespace std;

class Swap{   
    public:  
        int a, b;

        void getval(){  
            cin >>a>> b;  
        }         

        Swap operator ^(Swap obj) {  
            Swap A;  
            A.a = obj.a;  
            A.b = obj.b;  
            return A;  
        }
        void print(){
            cout <<"The Value After Swaping of A : "<<a<<" & B : "<<b<<endl;
        }
};
int main(){
    Swap e1,e2,c;
    cout<<"Enter The Value Of A & B : ";
    e1.getval();
    cout<<"Enter The Value Of A & B : ";
    e2.getval();
    c=e1^e2;
    e2=e1;
    e1=c;
    e1.print();
    e2.print();
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() { 
    int a = 7, b = 3;
    cout <<"Before swaping a = "<<a<< ",b="<<b<<endl;
    a = a ^ b;
    b = b ^ a; 
    a = a ^ b; 
    cout << "After swaping a = "<<a << ",b = "<<b<< endl;
    return 0; 
}

*/