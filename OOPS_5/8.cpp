//Write a C++ program to find Volume of Cube, Cylinder, Sphere using Function Overloading.


#include <iostream>
using namespace std;

void volume(int a){
    cout<<"The Volume is Sphere : "<<(4/3)*(3.14)*a*a*a<<endl;
}
void volume(float a){
    cout<<"The Volume is Cube : "<<a*a*a<<endl;
}
void volume(float r,float h){
    cout<<"The Volume Of Cylinder is :"<<3.14*r*r*h<<endl;
}
int main()
{   int a,c;
    float b;
    cout<<"Enter the raduis of sphere in {Integer} : ";
    cin>>a;
    volume(a);
    cout<<"Enter the raduis of Cube in {Float} : ";
    cin>>b;
    volume(b);
    cout<<"Enter the raduis , height of Cylinder in {Float} : ";
    cin>>a>>c;
    volume(a,c);
    return 0;
}
