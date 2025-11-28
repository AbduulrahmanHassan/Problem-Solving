//Task1
//Read 3 numbers from stdin and print their sum to stdout.
using namespace std;
#include <iostream>


int main ()
{
    int a,b,c;
    cout << "enter numbers";
    cin>> a >> b >> c ;
    while(a+b >1000)
    {
        cout<< "enter a and b again ";
        cin >> a >> b >> c;
    }
    cout<< a+b+c;
}