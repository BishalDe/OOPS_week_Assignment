/* 3. Write a C++ program to define a class Date that holds day, month and year as data
members. Also write necessary member methods to
a) Read a date
b) Print a date in different formats
c) Find the date exactly one week after the given date. e.g. If the given date is 30-10-
2013, then the resultant date is 6-11-2013.   */

#include <iostream>
using namespace std;
class date
{
private:
    int day, month, year;

public:
    void get()
    {
        cout << "Enter the date :";
        cin >> day >> month >> year;
    }
    void display()
    {
        cout << "date in dd/mm/yyyy format " << day << "/" << month << "/" << year << endl;
        cout << "date in mm/dd/yyyy format " << month << "/" << day << "/" << year << endl;
        cout << "date in yyyy/dd/mm format " << year << "/" << day << "/" << month << endl;
    }
    void weeklater()
    {
        if (month == 1, 3, 5, 7, 8, 10, 12)
        {
            // all 31 days - months
            if ((day + 7) > 31)
            {
                if (month == 12)
                {
                    month = 1;
                    year++;
                }
                month++;
                day = (day + 7) - 31;
            }
            else
            {
                day = day + 7;
            }
        }
        else
        {
            // all 30 days months
            if ((day + 7) > 30)
            {
                month++;
                day = (day + 7) - 30;
            }
            else
            {
                day = day + 7;
            }
        }
        cout <<"One Week After Date : "<< day << "/" << month << "/" << year<<endl;
    }
};
int main()
{
    date a1, a2;
    a1.get();
    a1.display();
    a1.weeklater();
    a2.get();
    a2.display();
    a2.weeklater();
    return 0;
}