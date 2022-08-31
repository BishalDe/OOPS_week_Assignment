#include <iostream>
using namespace std;
class fact{
    private:
    int n,i;
    public:
    void add();
};
void fact::add(){
    int a=1;
    cout<<"enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++){
        a=a*i;}
    cout<<"The factorial is : "<<a;
};
int main()
{
    fact o1;
    o1.add();
    return 0;}
