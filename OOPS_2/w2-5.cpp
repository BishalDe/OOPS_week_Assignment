#include<iostream>
using namespace std;
int main()
{
    int amount,n2k,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    cout<<"enter an amount:";
    cin>>amount;
    n2k=amount/2000;
    cout<<"2000="<<n2k<<"\n";
    amount=amount-(2000*n2k);
    n500=(amount/500);
    cout<<"500="<<n500<<"\n";
    amount=amount-(500*n500);
    n200=(amount/200);
    cout<<"200="<<n200<<"\n";
    amount=amount-(200*n200);
    n100=amount/100;
    cout<<"100="<<n100<<"\n";
    amount=amount-(n100*100);
    n50=amount/50;
    cout<<"50="<<n50<<"\n";
    amount=amount-(n50*50);
    n20=amount/20;
    cout<<"20="<<n20<<"\n";
    amount=amount-(n20*20);
    n10=amount/10;
    cout<<"10="<<n10<<"\n";
    amount=amount-(n10*10);
    n5=amount/5;
    cout<<"5="<<n5<<"\n";
    amount=amount-(n5*5);
    n2=amount/2;
    cout<<"2="<<n2<<"\n";
    amount=amount-(n2*2);
    n1=amount;
    cout<<"1="<<n1<<"\n";

    return 0;
}