#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter1 = 0;
    int counter0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '1')
        {
            counter1++;
        }
        else
        {
            counter0++;
        }
    }

    int counter = abs(counter1 - counter0);
    cout << counter;
}