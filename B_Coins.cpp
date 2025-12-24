#include <bits/stdc++.h>
using namespace std;
#include <cmath> // For std::abs with all numeric types
#include <string>

int main()
{
    string in1, in2, in3;
    cin >> in1;
    cin >> in2;
    cin >> in3;

    int a = 0, b = 0, c = 0;
    if (in1 == "A>B" ||
        in2 == "A>B" ||
        in3 == "A>B" || in1 == "B<A" || in2 == "B<A" || in3 == "B<A" )
    {
        a++;
        b--;
    }
    if (in1 == "A>C" || in2 == "A>C" || in3 == "A>C" || in1 == "C<A" || in2 == "C<A" || in3 == "C<A")
    {
        a++;
        c--;
    }
    if (in1 == "B>C" || in2 == "B>C" || in3 == "B>C"|| in1 == "C<B" || in2 == "C<B" || in3 == "C<B")
    {
        b++;
        c--;
    }
    if (in1 == "B>A" || in2 == "B>A" || in3 == "B>A" ||in1 == "A<B" || in2 == "A<B" || in3 == "A<B")
    {
        b++;
        a--;
    }
    if (in1 == "C>A" || in2 == "C>A" || in3 == "C>A" || in1 == "A<C" || in2 == "A<C" || in3 == "A<C")
    {
        c++;
        a--;
    }
    if (in1 == "C>B" || in2 == "C>B" || in3 == "C>B" || in1 == "B<C" || in2 == "B<C" || in3 == "B<C")
    {
        c++;
        b--;
    }
 if (a == b || a == c || b == c) {
    cout << "Impossible";
}
else if (a > b && a > c)
{
    if (b > c)
        cout << "CBA";
    else
        cout << "BCA";
}
else if (b > a && b > c)
{
    if (a > c)
        cout << "CAB";
    else
        cout << "ACB";
}
else
{
    if (a > b)
        cout << "BAC";
    else
        cout << "ABC";
}

    
}