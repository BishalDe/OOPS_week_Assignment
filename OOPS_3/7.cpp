/*7. Print the average of three numbers entered by the user by creating a class named & Average & having a function to calculate and print the average without creating any object of the
Average class.*/

#include <iostream>
using namespace std;
class Average{
    public:
    static float averagefind(float i, float j, float k){
        return (i + j + k) / 3;
    }
};
 
 
int main(){
    cout<<"Enter three numbers: ";
    float a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"The average is: "<< Average :: averagefind(a,b,c)<<endl;
    return 0;
}
