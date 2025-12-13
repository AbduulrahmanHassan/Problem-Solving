#include <iostream>
using namespace std;

int main()
{
    long long n;
    long long k;
    cin >> n >> k;

    long long counterOdd = (n+1)/2;
    long long counterEV = n/2;

    if(k<=counterOdd)
    cout<<(k *2) - 1;
    else
    cout << 2*(k - counterOdd);
}