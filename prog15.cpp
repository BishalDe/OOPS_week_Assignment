#include <iostream>
using namespace std;
int main(){
    int i,j,a=9;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(j<=a){
                cout<<a;
            }
        }
        cout<<"\n";
        --a;
    }
 return 0;
}