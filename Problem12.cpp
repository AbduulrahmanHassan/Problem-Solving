#include <iostream>
using namespace std;


void checkForWinner(int n);

int main()
{
    int n;
    cout << "Enter number of games: ";
    cin >> n;
    checkForWinner(n);
}

void checkForWinner(int n)
{
    string s;
    int counterA = 0;
    int counterD = 0;

   // cout << "Enter winners string (A for Anton, D for Danik): ";
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            counterA++;
        else if (s[i] == 'D')
            counterD++;
        else
            cout << "Invalid character detected!\n";
    }

    if (counterA > counterD)
        cout << "Anton";
    else if (counterD > counterA)
        cout << "Danik";
    else
        cout << "Friendship";
}
