// Write a C++ program to find the number and sum of all integer between 100 and 200
// which are divisible by 9 with constructor destructor.

#include <iostream>
using namespace std;
class number
{
public:
    number()
    {
        int i, j = 0;
        cout <<"Numbers that are divisible by 9 between 100 and 200 \n" << endl;
        for (i = 101; i < 200; i++)
            if (i % 9 == 0)
            {
                cout << i << " ";
                j = j + i;
            }

        cout << endl
             << "\n\nSum of all numbers divisible by 9 is= " << j << endl;
    }
    ~number()
    {
        cout << "Destructor Is Called..!\n" << endl;
    }
};
int main()
{
    number f;
}
