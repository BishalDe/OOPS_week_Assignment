#include <iostream>
using namespace std;
 
class car{
    public:
    string brand;
    string model;
    int year;
 
    car(){}

    car(string a,string b, int c){
        brand = a;
        model = b;
        year = c;
    }
    void recommendation(){
        if(year>2020){
            cout << "Car is Recommended";
        }
        else
        cout << "Car is not Recommended";
    }
};
 
int main()
{
    car car1,car2;
    cout << "Enter the Brand of car 1: ";
    cin >> car1.brand;
    cout << endl << "Enter the model of car 1: ";
    cin >> car1.model;
    cout << endl << "Enter the year car was purchased : ";
    cin >> car1.year;
    cout << endl;
    car1.recommendation();
    cout << endl;
    cout << "Enter the Brand of car 2: ";
    cin >> car2.brand;
    cout << endl << "Enter the model of car 2: ";
    cin >> car2.model;
    cout << endl << "Enter the year car was purchased : ";
    cin >> car2.year;
    cout << endl;
    car2.recommendation();
    return 0;
}
