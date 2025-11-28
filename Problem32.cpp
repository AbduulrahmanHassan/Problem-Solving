#include <iostream>
using namespace std;

int main()
{
    char word1[1005];
    cin >> word1;
    word1[0]= toupper(word1[0]);
    cout<<word1;
}