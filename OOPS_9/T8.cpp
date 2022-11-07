// 8. Write a Function Template in C++ to find the maximum number among the 3 given numbers.

#include <iostream>
using   namespace std;

template<typename T>
T FindLargest(T n1, T n2 ,T n3){
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1<<endl;

    if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2<<endl;
    
    if(n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3<<endl;
}

int main(){
    int n1=10, n2=22, n3=99;
    FindLargest(n1,n2,n3);
    float m1=2.3,m2=8.3,m3=-77.2;
    FindLargest(m1,m2,m3);

    return 0;
}