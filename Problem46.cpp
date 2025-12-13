#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string teams[n];
    for (int i = 0; i < n; i++)
    {
        cin >> teams[i];
    }
        string temp = teams[0];
    int counter1 = 0;
    int counter2 = 0;
    string temp2;
    for (int i = 0; i < n; i++)
    {
        if (teams[i] == temp)
            counter1++;
        else
        {
            counter2++;
            temp2 = teams[i];
        }
    }
    if(counter1 >= counter2)
    cout<<temp;
    else
    cout<<temp2;
}
