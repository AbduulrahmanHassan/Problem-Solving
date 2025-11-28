/*One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests.
 Participants are usually offered several problems during programming contests.
 Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution.
Otherwise, the friends won't write the problem's solution.
This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.*/

#include <iostream>
using namespace std;

int ProblemsSolved(int arr[][3], int size)
{
    int agree = 0;
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        agree =0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                agree++;
            }
        }

        if (agree >= 2)
        {
            counter++;
            agree = 0;
        }
    }
    return counter;
}
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    cout << ProblemsSolved(arr, n);
}
