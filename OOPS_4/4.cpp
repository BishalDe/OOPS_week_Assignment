// 4. Write a C++ Program to calculate Volume of Cube using constructor and destructor.

#include <iostream>
using namespace std;
class cube
{
private:
    double side, volume;

public:
    cube()
    {
        cout << " The side of the cube is: ";
        cin >> side;
    }

    int display()
    {
        volume = side * side * side;
        cout << "\nThe volume of the Cube is : " << volume << endl;
        return 0;
    }
    ~cube()
    {
        cout << "Destructor Is Called .!\n";
    }
};
int main()
{
    cube c;
    c.display();
    return 0;
}
