//Write a Program to Check if a Given Year Is a Leap Year.
using namespace std;
#include <cmath>
#include <iostream>

void checkForLeapYear(int);
int main()
{
    int year;
    string str;
    cout<<"enter str to start program ";
    cin>> str;
    cout<<"enter the year"<<endl;
    cin>>year;
    while(str =="start"){
    cout<<"enter the year"<<endl;
    cin>>year;
    checkForLeapYear(year); 
    cout<<"enter str to start program ";
    cin>> str;

}
}

void checkForLeapYear(int year)
{
    if( year %400 == 0)
    {
        cout<<"this year is a leap year with 366days"<<endl;
    }
     else if (year % 100 == 0) {
        cout<<"this year is not a leap year with 366days"<<endl;
    }
    else if (year % 4 == 0) {
        cout<<"this year is a leap year with 366days"<<endl;
    }
    else {
        cout<<"this year is not a leap year with 366days"<<endl;
    }
}