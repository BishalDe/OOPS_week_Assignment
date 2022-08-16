#include <iostream>
using namespace std;
int main(){
    int i,j;
    for (i=1;i<6;i++){
        for (j=1;j<6;j++){
            if(i>=j){
            cout<<"*";
            }
        }
        cout<<endl;
    }
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            if((i+j)<=5){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
 return 0;
}