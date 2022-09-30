//4. Write a C++ program for show Counter using Overloading unary operator ++.

#include<iostream>
using namespace std;
class counter
{
    int count=0;
    public:

    void operator ++(){
     count++;
    }
    
    void operator ++(int){
     count++;
    }

    void operator --(){
     count--;
    }
    
    void operator --(int){
     count--;
    }

    int show(){
        return count;
    }
};
 
int main()
{
    counter c1,c2;
    cout<<"Starting Values -> C1 = "<<c1.show()<<"    C2 = "<<c2.show()<<endl;
    c1++; 
    c1++;          
    c2++;
    ++c2;
    ++c2;
    --c2;
    --c1;
    cout<<"Ending Values   -> C1 = "<<c1.show()<<"    C2 = "<<c2.show();
    return 0;
}