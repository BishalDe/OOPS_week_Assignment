#include <iostream>
using namespace std;
int main(){
    string month;
    cout<<"enter a month:\n";
    cin>>month;
    if((month=="january")||(month=="march")||(month=="may")||(month=="july")||(month=="august")||(month=="october")||(month=="december")){
        cout<<"thirty one days";
        }
    else if((month=="april")||(month=="june")||(month=="september")||(month=="november")){
        cout<<"thirty days";
        }
    else if (month=="february"){
        cout<<"twenty one days";
    }
 return 0;
}