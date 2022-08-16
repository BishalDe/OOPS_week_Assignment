#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first integer:\n";
    cin>>a;
    cout<<"enter second integer:\n";
    cin>>b;
    c=(a+b);
    if ((105<c)&&(200>c)){
        cout<<200;
    }
    else {
        cout<<c;
    }
    
 return 0;
}