//Write a Program to Find the Size of int, float, double, and char.
using namespace std;
#include <iostream>

struct input{
int a ;
char c;
float f;
short s;
long l ;
};
int main ()
{
  input in ;
  cout<<"enter values for int,char ,float,short,long";
  cin>>in.a>>in.c>>in.f>>in.s>>in.l;
  cout << "size of Int: "<< sizeof(in.a) << endl 
  << "size of char: "<< sizeof(in.c)<< endl
  << "size of float: "<< sizeof(in.f)<< endl
  << "size of short: "<< sizeof(in.s)<< endl
  << "size of long: "<< sizeof(in.l)<< endl;
}