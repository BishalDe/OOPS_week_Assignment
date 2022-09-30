//11. Write a C++ program to find volume of cube, cylinder, and sphere by function and operator overloading

#include <iostream>
using namespace std;

class Area{
    public:
    int a,c;
    float b;
    Area(int x){
        // cout<<"Enter the raduis of sphere in {Integer} : ";
        a=x;
    }
    Area(float y){
        // cout<<"Enter the raduis of Cube in {Float} : ";
        b=y;
    }
    Area(int g,int h){
        // cout<<"Enter the raduis , height of Cylinder in {Float} : ";
        a=g;
        c=h;
    }

    Area operator +(){
        cout<<"The Volume is Sphere : "<<(4/3)*(3.14)*a*a*a<<endl;
    }
    Area operator -(){
        cout<<"The Volume is Cube : "<<a*a*a<<endl;
    }
    Area operator *(){
        cout<<"The Volume Of Cylinder is :"<<3.14*a*c*a<<endl;
    }

};

int main()
{   Area sphere(5);
    +sphere;
    Area cube(12.5f);
    -cube;
    Area cylinder(22,4);
    *cylinder;    
    return 0;
}
