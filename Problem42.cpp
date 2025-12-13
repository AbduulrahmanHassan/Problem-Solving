#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    long long start = 1;
    for(int i = 0; i < n - 1; i++) {
        start *= 10;
    }

    long long remainder = start % t;

    if (remainder == 0) {
        cout << start;
    } else {
        cout << start + (t - remainder);
    }

    return 0;
}