#include <bits/stdc++.h>
using namespace std;
#include <cmath> // For std::abs with all numeric types
#include <string>
#include <iomanip>

int main()
{
    int n, l;
    cin >> n >> l;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double minD = 0;
    sort(arr.begin(), arr.end());

    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        minD = max(minD, (double)(arr[i + 1] - arr[i]));
    }

    minD = max(minD, (double)arr[0] * 2);
    minD = max(minD, (double)(l - arr[n - 1]) * 2);

    cout << fixed << setprecision(10) << minD / 2;
}