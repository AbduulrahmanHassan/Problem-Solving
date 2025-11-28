#include <iostream>
using namespace std;

int main()
{
    char word1[1005];
    char word2[1005];

    char upperCase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> word1 >> word2;
    int i = 0;
    int result = 0;

    while (word1[i] != '\0' && word2[i] != '\0')
    {
        for (int j = 0; j < 26; j++)
        {
            if (word1[i] == upperCase[j])
                word1[i] = upperCase[j] + 32;

            if (word2[i] == upperCase[j])
                word2[i] = upperCase[j] + 32;
        }

        if (word1[i] < word2[i])
        {
            result = -1;
            break;
        }
        else if (word1[i] > word2[i])
        {
            result = 1;
            break;
        }
        i++;
    }

    if (result == 0)
    {
        if (word1[i] == '\0' && word2[i] == '\0') result = 0;
        else if (word1[i] == '\0') result = -1;
        else result = 1;
    }

    cout << result;
    return 0;
}
