#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int Sereja = 0;
    int Dima = 0;
    int cuurent = n -1 ;
    int key;
    bool dima = false;
    bool sereja = true;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n; i++)
    {
        i =0;
        if (arr[i] > arr[cuurent])
        {
            key = arr[i];
            b = i;
        }
        else if (arr[i] < arr[cuurent])
        {
            key = arr[cuurent];
            b = cuurent;
        }
        else
            key = arr[cuurent];
        if (sereja == true)
        {
            Sereja += key;
            sereja = false;
            dima = true;
        }
        else
        {
            Dima += key;
            sereja = true;
            dima = false;
        }
        for (int j = b; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
        cuurent--;
        n--;
    }
    cout << Sereja << " " << Dima;
}
