#include <iostream>
using namespace std;

int main()
{
    char word1[1005];
    cin >> word1;
    int i = 0;
    int result = 0;
    int uppercase = 0;
    int lowercase = 0;
    for (int i = 0; word1[i] != '\0'; i++)
    {
        if ((int)word1[i] >= 65 && (int)word1[i] <= 90)
            uppercase++;

        else if ((int)word1[i] >= 97 && (int)word1[i] <= 122)
            lowercase++;
    }

    for (int i = 0; word1[i] != '\0'; i++)
    {
        if (uppercase > lowercase)
            word1[i] = toupper(word1[i]);
        else if (lowercase > uppercase)
            word1[i] = tolower(word1[i]);
        else
            word1[i] = tolower(word1[i]);
    }

    cout<<word1;
}