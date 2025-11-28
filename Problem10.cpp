//Find Reverse an Array
#include<iostream>
using namespace std;

void ReverseArray(int [] , int );

int main()
{
    int arr[] = {1,2,3,4 ,3,3,1};
    int size = sizeof(arr)/sizeof(int);
    ReverseArray(arr , size);
}

void ReverseArray(int arr[] , int size)
{
for(int i = 0 ; i <size/2 ; i ++ )
{
    int temp = arr[size - i -1];
    arr[size - i -1] = arr[i]; 
    arr[i] = temp;
}
for(int i =0 ; i<size ; i++)
{
    cout<<arr[i] ;
}
}