// Write a C++ Program with three different function with same name to find the sum of digits using function overloading.

#include <iostream>
using namespace std;
class digit
{
public:
    int r, s = 0, number;
    int sod()
    {
        cout << "Enter a number :" << endl;
        cin >> number;
        return number;
    }
    int sod(int n, int m)
    {

        while (n > 0)
        {
            r = n % m;
            s = s + r;
            n = n / m;
        }
        return s;
    }
    int sod(int sum)
    {
        return sum;
    }
};
int main()
{
    int a, b, c;
    digit obj1;
    a = obj1.sod();
    b = obj1.sod(a, 10);
    c = obj1.sod(b);
    cout << "THE SUM OF THE DIGIT IS: " << c << endl;
    return 0;
}
