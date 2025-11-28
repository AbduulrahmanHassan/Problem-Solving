#include <iostream>
using namespace std;

int main()
{
    int n;
    char arr[n];
    cin>>n;
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int counter =0;
    for(int i =0 ; i<n-1 ; i++)
    {
        if(arr[i] == arr[i+1])
        {
            counter++;
        }
    }
    cout<<counter;
}