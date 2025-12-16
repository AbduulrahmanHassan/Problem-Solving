#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string result = "";

    for (int i = n - 1; i >= 0; i--)
    {
        int mid = result.size() / 2;
        result.insert(mid, 1, s[i]);
    }

    cout << result;
    return 0;
}
