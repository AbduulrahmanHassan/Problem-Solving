#include <bits/stdc++.h>
using namespace std;
#include <cmath> // For std::abs with all numeric types
#include <string>

int main()
{
    string n;
    cin >> n;
    int sum = 0;
    int counter = 0;

    for (int i = 0; i < n.length(); i++)
    {
        sum += n[i] - '0';
    }
    if (n.length() == 1)
    {
        cout << "0";
        return 0;
    }

    counter++;
    while (sum > 9)
    {
        string temp = to_string(sum);
        sum = 0;
        for (int i = 0; i < temp.length(); i++)
        {
            int digit = temp[i] - '0';
            sum += digit;
        }
        counter++;
    }
    cout << counter;
}