/*assign , compare , length , append*/

#include <iostream>
using namespace std;

int main()
{
    string Firstname = "abdelrahman";
    string Lastname = "hassan";

    Firstname.append(Lastname);
    cout<<Firstname << endl;

    int comp = Firstname.compare(Lastname);
    if (comp == 0) {
        cout << "Strings are equal." << endl;
    } else if (comp < 0) {
        cout << "first is greater than last." << endl;
    } else {
        cout << "first is less than last." << endl;
    }

    cout<<Firstname.length()<<endl;

    string assign;
    cout<<assign.assign(Firstname);
}