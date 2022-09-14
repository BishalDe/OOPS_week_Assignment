// Write C++ program to demonstrate example of Parameterized Constructor

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
        cout << "In Binary : " << bin<<endl;
    }
    ~deci()
    {
        cout<<"Destructor Is Called..!";
    }
};
int main()
{
    deci obj(4);
}
