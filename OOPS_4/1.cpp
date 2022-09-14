// Write a program in C++ to convert a decimal number into binary without using an
// array and using the constructor and destructor.
// Sample Output
// Please enter Decimal number: 8
// binary number = 1000

#include <iostream>
using namespace std;
class deci
{
public:
    deci(int n)
    {
        int i = 1, j = n, bin = 0;
        cout << "Please enter Decimal  number : ";
        cin >> n;
        for (j = n; j > 0; j = j / 2)
        {
            bin = bin + (n % 2) * i;
            i = i * 10;
            n = n / 2;
        }
        cout << "Binary number = " <<endl<<bin<<endl;
    }
    ~deci()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    deci obj(4);
}
