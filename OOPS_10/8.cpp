//8. Write a C++ program to throw exception by catching object as parameter inside catch block.

#include <iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int l=sizeof(arr)/sizeof(arr[0]);
    try{
        int i;
        cout <<"Enter the index no : ";
        cin>>i;
        if(i>=l)
            throw i;
        cout<<"Element At Index is : "<<arr[i]<<endl;
    }
    catch(int x){
        cout<<"Error : Invalid index {OverFlow..!}"<<endl;
    }
    return 0;
}