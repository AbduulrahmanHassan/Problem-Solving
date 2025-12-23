#include <bits/stdc++.h>
using namespace std;
#include <cmath> // For std::abs with all numeric types

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    arr[0] = 0;
    int spent = 0;
    int notspent = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        notspent += arr[i] - arr[i + 1];
        if (notspent < 0)
        {
            spent += abs(notspent);
                notspent = 0;
        }
    }
    cout << abs(spent);
}
