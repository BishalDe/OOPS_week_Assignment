#include <iostream>
using namespace std;
class AddDistance{
    private:
    int i,f;
    public:
    void get(){
        cout<<"Enter distance in feet and inches : ";
        cin>>f>>i;
    }
    void add(){
        int j;
        for(j=0;j<2;j++){
            i=i+1;
            if(i==12){
                f=f+1;i=0;
            }
        }
        cout<<"The distance is : "<<f<<" feet and "<<i<<" inches";
    }
};
int main()
{
    AddDistance val;
    val.get();
    val.add();
    return 0;
}
