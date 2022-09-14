// Write a program in C++ to make such a pattern like a pyramid with a number which
// will repeat the number in the same row using constructor overloading and destructor.

#include <iostream>
using namespace std;
class pyramid
{
private:
    int i, k, j, n, no;

public:
    pyramid() 
    {
        no = 9;
        n = no;
    }
    void sol()
    {
        for (i = 1; i <= no; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cout << " ";
            }
            n--;
            for (k = 1; k <= i; k++)
            {
                cout << " " << i;
            }
            cout << endl;
        }
    }
    ~pyramid()
    {
        cout << "Destructor Is called..!";
    }
};
int main()
{
    pyramid ob;
    ob.sol();
}
