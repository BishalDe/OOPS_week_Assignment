#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int roll_no;
    public:
    void display(){
        cin>>name>>roll_no;
        cout<<name<<" "<<roll_no;
    }
};
int main()
{
    student a1;
    a1.display();
    return 0;
}