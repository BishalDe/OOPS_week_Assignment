/*    */

#include <iostream>
using namespace std;
class date{
    private:
    int day,month,year;
    public:
    void get(){
        cout<<"Enter the date :";
        cin>>day>>month>>year;
    }
    void display(){
        cout<<"date in dd/mm/yyyy format "<<day<<"/"<<month<<"/"<<year<<endl;
        cout<<"date in mm/dd/yyyy format "<<month<<"/"<<day<<"/"<<year<<endl;
        cout<<"date in yyyy/dd/mm format "<<year<<"/"<<day<<"/"<<month<<endl;
    }
    
    void week(){
        int i;
        for(i=0;i<7;i++){
            if(month==1||month==3||month==5||month==7||month==8||month==10&&day==31){
                day=1;
                month++;
            }
            else if(month==4||month==6||month==9||month==11&&day==30){
                day=1;
                month++;
            }
            else if(month==2&&day==28){
                day=1;
                month++;
            }
            if(month==12&&day==31){
                month=1;
                day=1;
                year++;
            }
            else day++;
        }
        cout<<"the date after a week is "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    date a1,a2;
    a1.get();
    a1.display();
    a1.week();
    a2.get();
    a2.display();
    a2.week();
    return 0;
}