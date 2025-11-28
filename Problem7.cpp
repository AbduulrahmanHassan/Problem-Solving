//Write a Program to Find the Largest Among 3 Numbers.
using namespace std;
#include <cmath>
#include <iostream>
void largest(int[],int);

int main()
{
    int arr[] = {1, 200 ,2 ,53,2001};
    int size =sizeof(arr)/sizeof(int);

    largest(arr,size);
}

void largest(int arr[],int size)
{
    int largest = 0;
    for (int i = 0 ; i <size; i ++)
    {
        if(arr[i]> largest)
        {
            largest = arr[i];
        }
    }
    cout << "largest num is : " << largest ;
}