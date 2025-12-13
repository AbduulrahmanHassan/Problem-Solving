#include <iostream>
using namespace std;

int main()
{
    string Alph = "abcdefghijklmnopqrstuvwxyz";

    string name;
    cin >> name;
    int counter = 0;
    char w = 'a';
    for (int i = 0; i < name.length(); i++)
    {
        int v = abs(name[i] - w);
        counter += min(v, 26- v);
        w = name[i];
    }
    cout << counter;
}