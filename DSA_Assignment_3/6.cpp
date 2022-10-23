//6.	Pop element 9, 1, 5 from the queue using array implementation.


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


int dequeueelement(int val)
{
    int flag = 0;
    if (size == 0)
        cout << "UNDERFLOW..!" << endl;
    else
    {
        for (int i = 0; i<size; i++)
        {
            if (queue[i] == val)
            {
                for (int j = i; j < size; j++)
                {
                    queue[j] = queue[j + 1];
                }
                size--;
                flag = 1;
                return val;
            }
        }
        if (flag == 1)
            return -1;
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
    dequeueelement(9);dequeueelement(1);dequeueelement(5);
    display();
    return 0;
}