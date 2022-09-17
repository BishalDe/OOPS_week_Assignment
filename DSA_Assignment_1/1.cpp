#include <iostream>
using namespace std;

int main(){
    int arry[]={8,7,2,5,3,1};
    int siz=sizeof(arry)/sizeof(int);
    int target=10;
    for(int i=0; i<siz;i++)
        for(int j=0; j<siz;j++){
            if(arry[i]+arry[j]==target){
                cout<<"Pair Found ("<<arry[i]<<","<<arry[j]<<")"<<endl<<"Or"<<endl;
            }
        }
    return 0;
}