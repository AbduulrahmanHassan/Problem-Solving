#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + i;
    }
    int p, q;
    cin >> p;
    int x[p];
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    cin >> q;
    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (arr[i] == x[j])
            {
                arr[i] = 0;

            }
        }
        for (int a = 0; a < q; a++)
        {
            if (arr[i] == y[a])
            {
                arr[i] = 0;
            }
        }
    }
    bool counter = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            counter = true;
        }
        else
        {
            counter = false;
            break;
        }
    }
    if (counter)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}