#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++)
        cin >> h[i];

    int max_watered = 0;

    for(int i = 0; i < n; i++) {
        int watered = 1; 

        int j = i;
        while(j > 0 && h[j-1] <= h[j]) {
            watered++;
            j--;
        }

        j = i;
        while(j < n-1 && h[j+1] <= h[j]) {
            watered++;
            j++;
        }

        max_watered = max(max_watered, watered);
    }

    cout << max_watered << endl;
}
