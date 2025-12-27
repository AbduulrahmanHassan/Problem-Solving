#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int pos[n+1]; 

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i + 1;
    }

    int m;
    cin >> m;
    int search[m];
    for(int i = 0; i < m; i++) cin >> search[i];

    long long vasya = 0, petya = 0;
    for(int i = 0; i < m; i++) {
        int num = search[i];
        vasya += pos[num];           
        petya += n - pos[num] + 1;  
    }

    cout << vasya << " " << petya;
}
