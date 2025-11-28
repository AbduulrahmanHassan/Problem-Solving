//Write a Program to Find Compound Interest.
using namespace std;
#include <cmath>
#include <iostream>
void coumpoundInterest(float,float,float);
int main ()
{
float ratePerYear,TimePeriod,principalAmount;
cout<<"enter rate per year << time period << principal amount" << endl;
cin>>ratePerYear>>TimePeriod>>principalAmount;
coumpoundInterest(ratePerYear,TimePeriod,principalAmount);
}

void coumpoundInterest(float rate,float time ,float principal)
{
    float interest =0.0;
    float amount =0.0;
    amount= principal*pow((1 + rate / 100), time);
    interest = amount - principal;                 
    cout<<interest;

}