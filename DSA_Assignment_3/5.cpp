//5.	Push element 10, 30,60,20,5,1,80,9 into the Queue using array implementation.


#include <iostream>
using namespace std;

#define Capacity 1000

int size=0;
int queue[Capacity];

void enqueue(int val){
    if(size==Capacity-1){
        cout<<"OVERFLOW..!"<<endl;
    }
    else{
        queue[size]=val;
        size++;
    }
}

void display(){
    for(int i=0;i<size;i++ ){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}


int main(){
    enqueue(10);enqueue(30);enqueue(60);enqueue(5);enqueue(1);enqueue(80);enqueue(9);
    display();
    return 0;
}