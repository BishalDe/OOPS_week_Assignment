//Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square.

#include <iostream>
using namespace std;
class Area
{
public:
    void output(int l, int b)
    {
        cout<<"Area of Rectangle is = "<<l*b<<endl;
    }

    void output(int a)
    {
        cout<<"Area of Square is = "<<a*a<< endl;
    }
};

int main()
{
    Area are;
    are.output(2,3);
    are.output(2);
}     
