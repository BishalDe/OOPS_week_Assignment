/* 5. Write a C++ class which has two funtions get_Str and print_Str. get_Str accept a string
from the user and print_Str print the string in upper case and lower case.*/

#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
class stringking{
    public:
    string stringyoo;
 
    void get_str(){
        cout<<"Enter The line : ";
        getline(cin,stringyoo);
    }
    void print_str(){
        transform(stringyoo.begin(),stringyoo.end(),stringyoo.begin(),::tolower);
        cout << "lower case : "<<stringyoo << endl;
        transform(stringyoo.begin(),stringyoo.end(),stringyoo.begin(),::toupper);
        cout << "UPPER CASE : "<< stringyoo << endl;
    }
};
int main()
{   stringking userstring;
    userstring.get_str();
    userstring.print_str();
    return 0;
}
