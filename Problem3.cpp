//Write a Program to Swap Two Numbers.
using namespace std;
#include <iostream>

int main ()
{
   int a , b;
   string name;
   while (name != "exit")
   {
   cout << "enter two numbers:" ;
   cin>> a >> b;
   cout<<"before swap: " << a << " "<<b<< endl;
   int temp = a ;
   a = b;
   b = temp;
   cout<<"afterswap: "<< a <<" "<< b <<endl;
   cout<<"enter exit to quit or any other key to continue:";
   cin>> name;
}
}
