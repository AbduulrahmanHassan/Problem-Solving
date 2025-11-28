/*You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.*/
#include <iostream>
using namespace std;

int CheckForOne(int arr[5][5])
{
    int counter = 0;
    int temp = 0;

    for (int repeat = 0; repeat < 10; repeat++)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (arr[i][j] == 1)
                {
                    if (j < 2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i][j + 1];
                        arr[i][j + 1] = temp;
                        counter++;
                    }
                    else if (i < 2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i + 1][j];
                        arr[i + 1][j] = temp;
                        counter++;
                    }
                    else if (j > 2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i][j - 1];
                        arr[i][j - 1] = temp;
                        counter++;
                    }
                    else if (i > 2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i - 1][j];
                        arr[i - 1][j] = temp;
                        counter++;
                    }
                    goto next_move;
                }
            }
        }
    next_move:
        continue;
    }

    return counter;
}

int main()
{
    int arr[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1}};

    cout << CheckForOne(arr) << endl;

    
}
