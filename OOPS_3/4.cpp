/* */


#include <iostream>
using namespace std;
class circle{
    private:
    float radius;
    public:
    void get(){
        cout<<"Enter the radius: ";
        cin>>radius;
    }
    void peri(){
        cout<<"The perimeter is "<<2*3.14*radius<<endl;
    }
    void area(){
        cout<<"The area is "<<3.14*radius*radius<<endl;
    }
};
int main(){
    circle a1;
    a1.get();
    a1.peri();
    a1.area();
}