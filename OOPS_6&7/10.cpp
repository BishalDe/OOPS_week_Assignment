// 10. Write a C++ program to find area of square, rectangle, Circle and triangle using operator overloading.

#include <iostream>
using namespace std;
class Area
{
    int s, l, b;
    float base, height;
    float r;

public:
    void inputRect()
    {
        cout << "Enter length and breadth of the rectangle: " << endl;
        cin >> l;
        cin >> b;
    }
    void inputSq()
    {
        cout << "\n\nEnter side of the square: ";
        cin >> s;
    }
    void inputCir()
    {
        cout << "\n\nEnter radius of the circle: ";
        cin >> r;
    }
    void inputTriangle()
    {
        cout << "\n\nEnter base and height of the triangle: " << endl;
        cin >> base;
        cin >> height;
    }
    Area operator*(Area obj)
    {
        Area a1;
        a1.l = obj.l;
        a1.b = obj.b;
        cout << "Area of rectangle: " << l * b;
        return a1;
    }
    Area operator+(Area obj)
    {
        Area a2;
        a2.s = obj.s;
        cout << "Area of square: " << s * s;
        return a2;
    }
    Area operator-(Area obj)
    {
        Area a3;
        a3.r = obj.r;
        cout << "Area of circle: " << 3.14 * r * r;
        return a3;
    }
    Area operator/(Area obj)
    {
        Area a4;
        a4.base = obj.base;
        a4.height = obj.height;
        cout << "Area of triangle: " << 0.5 * base * height;
        return a4;
    }
};
int main()
{
    Area a1, a2, a3, a4, res, resu, resul, result;
    a1.inputRect();
    res = a1 * a1;
    a2.inputSq();
    resu = a2 + a2;
    a3.inputCir();
    result = a3 - a3;
    a4.inputTriangle();
    resul = a4 / a4;
    return 0;
}