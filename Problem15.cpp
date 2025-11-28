//Pointer & Array
using namespace std;
#include <iostream>


struct Student {
    string name;
    int age;
};

void swapValues(int *a , int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
void arrPrint(int *ptr , int size)
{
   for (int i = 0; i < size; i++)
   {
     cout<<*ptr<<endl;
     ptr++;
   }
}
void sum(int *ptr , int size)
{
    int sum;
    for(int i =0 ; i<size-1 ; i++)
    {
      sum =*ptr + *(ptr + 1);
      ptr++; 

    }
    cout<<*ptr<<endl;

}

int main()
{
  int arr[] = {10, 20, 30, 40};
  int size;
  size = sizeof(arr) / sizeof(int);
  arrPrint(arr , size);
  int a =10 , b = 20;
  int *ptr1 = &a , *ptr2 = &b;
  swapValues(&a , &b);
  cout<<*ptr1 << endl<<*ptr2;
  swapValues(ptr1,ptr2);
  cout<<*ptr1 << endl<<*ptr2;

  int x = 10;
  int *ptr = &x;
  *ptr = *ptr * 2 ;
 // cout<<*ptr;
}