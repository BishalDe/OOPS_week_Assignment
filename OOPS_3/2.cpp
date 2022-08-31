#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_no;

public:
    void display()
    {
        cin >> name >> roll_no;
        cout << name << " " << roll_no;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}

/*Write a C++ program to illustrate the concept of class and object creation. (Ask
students to create a class, methods and invoke them inside main method).*/