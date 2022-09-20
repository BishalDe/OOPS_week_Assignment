// Create a class 'Degree' having a function 'getDegree' that prints "I got a degree". It has two subclasses namely 'Undergraduate' and 'Postgraduate' each having a function with the same name that prints "I am an Undergraduate" and "I am a Postgraduate" respectively. Call the function by creating an object of each of the three classes.
#include <iostream>
using namespace std;

class degree
{
    public:
        degree()
        {
            cout << "I got a degree." << endl;
        }
};
class Undergraduate : public degree
{
    public:
        Undergraduate()
        {
            cout << "I am an Undergraduate" << endl;
        }
};
class Postgraduate : public degree
{
    public:
        Postgraduate()
        {
            cout << "I am a Postgraduate";
        }
};
int main()
{
    Undergraduate ug;
    Postgraduate pg;
}