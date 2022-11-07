// Write a C++ program to implement multiple try catch exception for any given condition.

#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x > 0)
            throw x;
        else if (x < 0)
            throw 'A';
        else
            throw true;
    }
    catch (int x)
    {
        cout << "Exception : Number Greater Than 0." << endl;
        ;
    }
    catch (char x)
    {
        cout << "Exception : Number Less Than 0." << endl;

    }
    catch (...)
    {
        cout << "Equals to 0 " << endl;
    }
}

int main()
{
    cout << "Testing Multiple Catches : " << endl;
    test(-10);
    test(10);
    test(0);

    return 0;
}