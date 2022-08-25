/*
1.	Write a C++ program that will display the calculator menu. The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer vales for the calculation. See the sample below.
MENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus
*/

#include <iostream>
using namespace std;

int main()
{
    int choice, a, b;
    while (true)
    {
        string str = "\t*****MENU*****\n1) ADD\n2) SUBSTRACT\n3) MULTIPLY\n4) DIVIDE\n5) MODULUS\n\t**************";

        cout << str << endl
             << "Enter Your Choice :- ";
        cin >> choice;

        cout << "Enter first number : ";
        cin >> a;

        cout << "Enter second number : ";
        cin >> b;

        switch (choice)
        {
        case 1:
            cout << "Result : " << a + b << endl;
            break;
        case 2:
            cout << "Result : " << a - b << endl;
            break;
        case 3:
            cout << "Result : " << a * b << endl;
            break;
        case 4:
            cout << "Result : " << a / b << endl;
            break;
        case 5:
            cout << "Result : " << a % b << endl;
            break;
        }

        char ch;
        cout << "Want To Retry?{Y/N} : ";
        cin >> ch;
        if (ch != 'Y')
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}