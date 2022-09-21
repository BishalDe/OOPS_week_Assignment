//Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown", otherwise the name should be equal to the String value passed while creating the object of the Student class.

#include <iostream>
using namespace std;
class Student{
    public:
    Student(){
        cout<<"Your Name is : Unknown"<<endl;
    }
    Student(string s){
        cout<<"Your Name is : "<<s<<endl;
    }
};
int main(){
    Student n1,n2("Bishal");
    return 0;
}
