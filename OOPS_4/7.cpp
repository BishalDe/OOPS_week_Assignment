// Write a C++ Program to display the reverse of a number using the constructor.

#include <iostream>
using namespace std;
class rev
{
private:
    int n, reverse = 0, rem;

public:
    rev()
    {
        cout << "Enter a number: ";
        cin >> n;
        while (n != 0)
        {
            rem = n % 10;
            reverse = reverse * 10 + rem;
            n /= 10;
        }
    }
    int display()
    {
        cout << "Reversed Number is : " << reverse << endl;
        return 0;
    }
};
int main()
{
    rev r;
    r.display();
    return 0;
}
