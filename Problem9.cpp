//Write a Program to Check Whether a Number Is Prime or Not.
using namespace std;
#include <cmath>
#include <iostream>

void checkPrime(int );

int main()
{
  int n1;

  string str;
    cout<<"enter str to start program " << endl;
    cin>> str;
    while(str =="start"){
    cout<<"enter num" <<endl;
    cin>>n1;    
    checkPrime(n1);
    cout<<"enter str to start program " << endl;
    cin>> str;
}
}
void checkPrime(int n)
{
    if (n <= 1) {
        cout << "not prime  " << endl;
        return;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << " not prime " << endl;
            return;
        }
    }

    cout << "prime num " << endl;
}
     
    
