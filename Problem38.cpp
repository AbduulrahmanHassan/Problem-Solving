#include <iostream>
using namespace std;

int main()
{
    string Alph = "abcdefghijklmnopqrstuvwxyz";

    string name;
    cin >> name;
    int last = 25;
    int counter = 0;
    int temp = 0;
    for (int i = 0; i < name.length(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if ((int)name[i] > 110)
            {
                if (name[i] == Alph[last])
                {
                    counter++;
                    cout<<counter<<"d"<<endl;
                    temp = counter;
                    break;
                }
                else
                    counter++;
            }
            else
            {
                if (name[i] == Alph[last])
                {
                    cout<<counter<<"a"<<endl;
                    counter++;
                    temp = last;
                     break;
                }
                else
                    counter++;
            }
            last--;
        }

    }
    cout<<counter;
}