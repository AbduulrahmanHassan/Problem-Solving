//Write a Program to Check Even or Odd Integers.
using namespace std;
#include <cmath>
#include <iostream>

void checkEvenOdd(int);

int main()
{
    int num;
    cout<< "enter num: " << endl;
    cin>> num ;
    checkEvenOdd(num);
}

void checkEvenOdd(int num)
{
    float num1 = num%2;
    if(num1 == 0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    cout<<num;
}