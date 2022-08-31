// 14. Perform addition operation on complex data using class and object. The program should
// ask for real and imaginary part of two complex numbers, and display the real and imaginary
// parts of their sum.
#include <iostream>
using namespace std;
class complex{
    private:
    int a,b,c,d;
    public:
    void get(){
        cout<<"Enter real part of 1st number : "<<endl;
        cin>>a;
        cout<<"Enter imaginary part of 1st number : "<<endl;
        cin>>b;
        cout<<"Enter real part of 2nd number : "<<endl;
        cin>>c;
        cout<<"Enter imaginary part of 2nd number : "<<endl;
        cin>>d;
    }
    void add(){
        cout<<"The sum of real part is : "<<a+c<<endl;
        cout<<"The sum of imaginary part is : "<<b+d<<endl;
        cout<<"total added number is : "<<a+c<<" + "<<b+d<<"i";
    }
};
int main()
{
    complex i;
    i.get();
    i.add();
    return 0;
}
