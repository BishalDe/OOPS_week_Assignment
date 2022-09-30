// 2. Write a C++ Program to Perform Complex Operations using binary operator overloading.

#include <iostream>  
using namespace std;

class OpComplex{   
    public:  
        int real, imaginary;

        void getval(){  
            cin >>real>> imaginary;  
        }         

        OpComplex operator + (OpComplex obj) {  
            OpComplex A;   
            A.real = real + obj.real;  
            A.imaginary = imaginary + obj.imaginary;  
            return A;  
        }         
        OpComplex operator - (OpComplex obj){   
            OpComplex A;  
            A.real = real - obj.real;  
            A.imaginary = imaginary - obj.imaginary;  
            return A;  
        }
        OpComplex operator * (OpComplex obj){   
            OpComplex A;  
            A.real = real * obj.real;  
            A.imaginary = imaginary * obj.imaginary;  
            return A;  
        }       
        OpComplex operator / (OpComplex obj){   
            OpComplex A;  
            A.real = real / obj.real;  
            A.imaginary = imaginary / obj.imaginary;  
            return A;  
        }    
        void add()  
        {  
            cout << real << "+" << imaginary << "j" << "\n";  
        }  
          

        void sub()  
        {  
            cout << real << "+" << imaginary << "j" << "\n";  
        } 

        void mul()  
        {  
            cout << real << "+" << imaginary << "j" << "\n";  
        } 
        void div()  
        {  
            cout << real << "+" << imaginary << "j" << "\n";  
        } 
};

int main ()  
{  
    OpComplex n1, n2, sum, sub, mul,div;
    cout<<"Enter The First Complex Number {Real <space> Imaginary part} : ";
    n1.getval();
    cout<<"Enter The Second Complex Number {Real <space> Imaginary part} : "; 
    n2.getval();
    
    sum = n1 + n2;
    sub = n1 - n2; 
    mul = n1 * n2;
    div = n1 / n2;

    cout << "\nThe addition of two complex (real and imaginary) numbers : ";  
    sum.add();    
    cout << "\nThe subtraction of two complex (real and imaginary) numbers : ";  
    sub.sub(); 
    cout << "\nThe multiplication of two complex (real and imaginary) numbers : ";  
    mul.mul(); 
    cout << "\nThe Division of two complex (real and imaginary) numbers : ";
    div.div();
    cout<<endl;
    return 0;  
}  