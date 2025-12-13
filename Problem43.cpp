#include <iostream>
#include <cmath>

using namespace std;
#include <cctype> // For std::tolower

int main()
{
    string name;
    cin >> name;
    string vowel = "aoyeui";
    for (int i = 0; i < name.size(); i++)
    {
        name[i] = tolower(name[i]);
    }
    for (int i = 0; i < name.length(); ) {
        bool isVowel = false;

        for (int j = 0; j < vowel.length(); j++) {
            if (name[i] == vowel[j]) {
                isVowel = true;
                break;
            }
        }

        if (isVowel)
            name.erase(i, 1);  
        else
            i++;                
    }
    string name2;
    char s = '.';
    for (int i=0; i < name.length(); i++)
    {
        name2 += ".";     
        name2 += name[i];
    }
    cout << name2;
}