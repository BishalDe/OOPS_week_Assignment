// Write a program in C++ to print Floyd’s Triangle by using the constructor destructor
#include <iostream>
using namespace std;
class floyd
{
private:
    int i, j, n, p, q;

public:
    floyd()
    {
        cout << "Floyd's Triangle:\n";
        cout << "Input number of rows: ";
        cin >> n;
    }

    int display()
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                p = 1;
                q = 0;
            }
            else
            {
                p = 0;
                q = 1;
            }
            for (j = 1; j <= i; j++)
                if (j % 2 == 0)
                    cout << p;
                else
                    cout << q;
            cout << endl;
        }
        return 0;
    }
    ~floyd()
    {
        cout<<"Destructor invoked";
    }
};
int main()
{
    floyd f;
    f.display();
    return 0;
}
