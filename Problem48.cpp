#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); ) {
        if (s.substr(i, 3) == "WUB") {
            cout << " ";
            i += 3;
        } else {
            cout << s[i];
            i++;
        }
    }

    return 0;
}
