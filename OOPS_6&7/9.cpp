//Write a C++ Program to check Palindrome using function and operator overloading

#include <bits/stdc++.h>
using namespace std;

class Palindrome{

    public:
        string s;
        int num;
        void get();
        void pali(int);
        void pali(string);


    void operator -(){
        cout<<"Enter The string :: ";
        cin>>s;
        string p=s;
        reverse(s.begin(),s.end());
        if (s==p) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;  
        }
    }
};

void Palindrome::get(){
    cout<<"Enter The Number For Palindrome : ";
    cin>>num;
    pali(num);
    cout<<"Enter the string for Palindrome : ";
    cin>>s;
    pali(s);
}

void Palindrome::pali(string S){
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        cout<<"It is a palindrome";
    }
    else {
        cout<<"It is not a palindrome";
    }
}
void Palindrome :: pali(int n){
        int n1,result,a;
        n1=n;
        result=0;
        while(n>0)
        {
            result=result*10;
            a=n%10;
            result=result+a;
            n=n/10;
        }
        if(result==n1)
            cout<<"It is Palindrome"<<endl;
        else
            cout<<"It is not a palindrome"<<endl;

}

int main(){
    Palindrome p;
    -p;
    p.get();
    return 0;
}