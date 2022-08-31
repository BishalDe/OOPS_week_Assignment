#include <iostream>
using namespace std;
class placement{
    private:
    string name,gender;
    float cgpa;
    int back;
    public:
    void get(){
        cout<<"Enter name of the student : ";
        cin>>name;
        cout<<"Enter cgpa of the student : ";
        cin>>cgpa;
        cout<<"Enter gender(M/F) of the student : ";
        cin>>gender;
        cout<<"Enter number of backlogs of the student : ";
        cin>>back;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Backlogs : "<<back<<endl;
        if(cgpa>8 && back==0)cout<<"Eligibiity for placement : Eligible";
        else cout<<"Eligibiity for placement : Not Eligible";
    }
};

int main()
{
    placement stud1;
    stud1.get();
    stud1.display();
    return 0;
}
