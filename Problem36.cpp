#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long temp = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            temp += arr[i];
            for (int j = i; j < n; j++)
            {
                if (arr[j + 1] == -1 && temp != 0)
                {
                    arr[j + 1]= 0 ;
                    temp--;
                }
                else
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == -1)
        count++;
    }
    cout<<count;
}