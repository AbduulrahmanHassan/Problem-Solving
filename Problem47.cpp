#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char color[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> color[i][j];
        }
    }
    bool bw = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (color[i][j] == 'Y' || color[i][j] == 'M' || color[i][j] == 'C')
            {
                cout << "#Color";
                return 0;
            }
            else
            {
                bw =true;
            }
        }
    }
    if(bw)
    cout<<"#Black&White";
}