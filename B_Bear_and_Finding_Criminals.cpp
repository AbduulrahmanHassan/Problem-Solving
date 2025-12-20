#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, sum = 0;
    cin >> n >> a;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 1; i <= a && i <= n - a; i++)
    {
        if (arr[i + a] + arr[a - i] == 1)
            sum--;
    }

    cout << sum;
}