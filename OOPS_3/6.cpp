/*6. Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5
units by creating a class named &#39;Triangle&#39; with a function to print the area and perimeter.*/

#include <iostream>
#include <math.h>
using namespace std;
 
class triangle{
    public:
    int side1,side2,side3;
    triangle(int i,int j,int k){
        side1 = i;
        side2 = j;
        side3 = k;
    }
    void area_perimeter(){
        int perimeter,area;
        perimeter = side1 + side2 + side3;
        int s = perimeter/2;
        area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout<<"The Area is : " << area <<endl;
        cout <<"The Perimeter is : "<< perimeter <<endl;
 
    }
};
int main()
{
    triangle usertriangle(3,4,5);
    usertriangle.area_perimeter();
    return 0;
}
