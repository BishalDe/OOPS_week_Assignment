/* */

#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_no;
    public:
    void display(){
        name="John";
        roll_no=2;
        cout<<name<<" "<<roll_no;
    }
};
int main()
{
    student a1;
    a1.display();
    return 0;
}