//1.	Push element 10, 30,60,20,5,1,80,9 into the stack using array implementation.

#include <iostream>
using namespace std;

#define Capacity 1000

int size=0;
int stack[Capacity];

void push(int val){
    if(size==Capacity-1){
        cout<<"OVERFLOW..!"<<endl;
    }
    else{
        stack[size]=val;
        size++;
    }
}

void display(){
    for(int i=size-1;i>=0;i-- ){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}



int main(){
    push(10);push(30);push(60);push(5);push(1);push(80);push(9);
    display();
    return 0;
}