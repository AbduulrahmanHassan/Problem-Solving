#include <iostream>
using namespace std;

int main()
{
    int caloris = 0;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    string num;

    cin >> num;
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '1')
        {
            caloris += arr[0];
        }
        else if (num[i] == '2')
        {
            caloris += arr[1];
        }
        else if (num[i] == '3')
        {
            caloris += arr[2];
        }
        else
        {
            caloris += arr[3];
        }
    }
    cout << caloris;
}