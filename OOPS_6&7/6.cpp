// 6. Write a C++ class Program to perform rational number arithmetic using operator overloading.

#include <iostream>
using namespace std;

class rational
{
    int num;
    int den;

public:
    void getdata()
    {
        cout << "\nEnter the numerator of the rational number: ";
        cin >> num;
        cout << "Enter the denominator of the rational number: ";
        cin >> den;
    }
    void operator +(rational);
    void operator -(rational);
    void operator *(rational);
    void operator /(rational);
};
void rational ::operator+(rational c1)
{
    rational temp;
    temp.num = (num * c1.den) + (c1.num * den);
    temp.den = den * c1.den;
    cout << "\n rational no. after addition: ";
    cout << "\n numerator = " << temp.num << "\n denominator =" << temp.den<<endl;
    cout<<"In Fraction Form : "<<temp.num<<"\\"<<temp.den;
}
void rational ::operator-(rational c1)
{
    rational temp;
    temp.num = (num * c1.den) - (c1.num * den);
    temp.den = den * c1.den;
    cout << "\n rational no. after subtraction: ";
    cout << "\n numerator = " << temp.num << "\n denominator = " << temp.den<<endl;
    cout<<"In Fraction Form : "<<temp.num<<"\\"<<temp.den;
}
void rational ::operator*(rational c1)
{
    rational temp;
    temp.num = num * c1.num;
    temp.den = den * c1.den;
    cout << "\n rational no. after multiplication: ";
    cout << "\n numerator = " << temp.num << "\n denominator = " << temp.den<<endl;
    cout<<"In Fraction Form : "<<temp.num<<"\\"<<temp.den;
}
void rational ::operator/(rational c1)
{
    rational temp;
    temp.num = num * c1.den;
    temp.den = c1.num * den;
    cout << "\n rational no. after dividing: ";
    cout << "\n numerator = " << temp.num << "\n denominator = "<<temp.den<<endl;
    cout<<"In Fraction Form : "<<temp.num<<"\\"<<temp.den;
}
int main()
{
    rational c1, c2;
    int n;
    do
    {
        cout << "\n\n 1. Input data for rational no. ";
        cout << "\n 2. Addition of rational no. ";
        cout << "\n 3. Subtraction of rational no. ";
        cout << "\n 4. Multiplication of rational no.";
        cout << "\n 5. Division of rational no. ";
        cout << "\n 6. Quit";
        cout << "\n\n Enter your choice :: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << endl << "\nEnter the data for first rational no. ";
            c1.getdata();
            cout<<"\n\nEnter the data for second rational no. ";
            c2.getdata();
            break;
        case 2:
            c1 + c2;
            break;
        case 3:
            c1 - c2;
            break;
        case 4:
            c1 *c2;
            break;
        case 5:
            c1 / c2;
            break;
        case 6:
            exit(1);
            break;
        }
    } while (n != 6);
    return 0;
}
