// 2. Ram and shiva are working as accountants in bank. They need to know all the arithmetic
// operations to verify the accounts. Since they are weak in mathematics, they found
// difficulty in doing such arithmetic operations. Help them to check accounts by applying
// arithmetic operations including add, subtract, multiply and divide using class template.

#include <iostream>
using namespace std;

template<class T>
class Accountant{
    public:
        void add(T a, T b){
            cout<<"Addition :"<<a+b<<endl;
        }

        void sub(T a, T b){
            cout<<"Subtraction :"<<a-b<<endl;
        }

        void mul(T a, T b){
            cout<<"Multiplication :"<<a*b<<endl;
        }

        void divide(T a, T b){
            cout<<"Division :"<<a/b<<endl;
        }
};
int main()
{   
    int a=10,b=20;
    Accountant<int> a1;
    a1.add(a,b);
    a1.mul(b,a);

    float c=2.2,d=6.6;
    Accountant<float> f1;
    f1.sub(c,d);
    f1.divide(d,c);
    return 0;
}
