// Write C++ Program to display the cube of the number upto a given integer using
// Destructor.
// Sample Output
// Please enter the number:
// 4
// cube of 1 is: 1
// cube of 2 is: 8
// cube of 3 is: 27
// cube of 4 is: 64

#include <iostream>
using namespace std;
class cube
{
private:
    int i, n;

public:
    cube()
    {
        int n;
    }
    void display()
    {
        cout << "enter the number :" << endl;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cout << "The cube of " << i << " is : " << (i * i * i) <<endl;
        }
    }
    ~cube()
    {
        cout<<"Destructor Is Called.!";
    }
};
int main()
{
    cube obj;
    obj.display();
}
