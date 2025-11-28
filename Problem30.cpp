#include <iostream>
using namespace std;
#include <cctype>

int main()
{
    char name[100];
    cin >> name;

    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = tolower(name[i]);
    }
    int letters[26] = {0};
    int index = 0;
    int counter=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
            index = name[i] - 'a';
        letters[index] = 1;
    }
    for(int i = 0 ; i < 26 ;i ++)
    {
        if(letters[i] == 1)
        {
            counter++;
        }
    }
    if (counter % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
