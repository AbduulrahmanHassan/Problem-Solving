#include <iostream>
using namespace std;

class Matrix
{
public:
    void scale()
    {
        int row, col;
        cout << "Enter rows : ";
        cin >> row;
        cout << "Enter cols : ";
        cin >> col;

        int matrix[row][col];
        cout << "Fill the matrix :\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout << "Enter scaling factors (" << col << " values ):\n";
        int arr[col];
        for (int i = 0; i < col; i++)
        {
            cin >> arr[i];
        }
        int ScaleMatrix[col + 1][col + 1];
        for (int i = 0; i < col + 1; i++)
        {
            for (int j = 0; j < col + 1; j++)
            {
                if (i == j) 
                {
                    if (i < col)
                        ScaleMatrix[i][j] = arr[i]; 
                    else
                        ScaleMatrix[i][j] = 1; 
                }
                else
                {
                    ScaleMatrix[i][j] = 0; 
                }
            }
        }
        int AugMatrix[row + 1][col + 1];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                AugMatrix[i][j] = matrix[i][j];
            AugMatrix[i][col] = 1;
        }
        for (int j = 0; j < col; j++)
            AugMatrix[row][j] = 0;
        AugMatrix[row][col] = 1;

        int outputM[row][col];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int sum = 0;
                for (int k = 0; k < col + 1; k++)
                {
                    sum += AugMatrix[i][k] * ScaleMatrix[k][j];
                }
                outputM[i][j] = sum;
            }
        }

        cout << "Scaled matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cout << outputM[i][j] << " ";
            cout << endl;
        }
    }
    void Translate()
    {
        int row, col;
        cout << "Enter rows ";
        cin >> row;
        cout << "Enter cols ";
        cin >> col;

        int matrix[row][col];
        cout << "Fill the matrix \n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }

        cout << "Enter translation distances (" << col << " values):\n";
        int arr[col];
        for (int i = 0; i < col; i++)
        {
            cin >> arr[i];
        }
        int TrasMatrix[row + 1][col + 1];
        for (int i = 0; i < row + 1; i++)
        {
            for (int j = 0; j < col + 1; j++)
            {
                if (i == j)
                    TrasMatrix[i][j] = 1;
                else if (i == row && j < col)
                    TrasMatrix[i][j] = arr[j];
                else
                    TrasMatrix[i][j] = 0;
            }
        }
        int AugMatrix[row + 1][col + 1];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                AugMatrix[i][j] = matrix[i][j];
            AugMatrix[i][col] = 1;
        }
        for (int j = 0; j < col; j++)
            AugMatrix[row][j] = 0;
        AugMatrix[row][col] = 1;

        int outputM[row][col];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int sum = 0;
                for (int k = 0; k < col + 1; k++)
                {
                    sum += AugMatrix[i][k] * TrasMatrix[k][j];
                }
                outputM[i][j] = sum;
            }
        }
        cout << "Translated matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cout << outputM[i][j] << " ";
            cout << endl;
        }
    }

    void matrixMultiple()
    {
        int rows1, col1;
        cout << "enter rows";
        cin >> rows1;
        cout << "enter col";
        cin >> col1;
        int matrix[rows1][col1];
        cout << "fill the matrix ";

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cin >> matrix[i][j];
            }
            cout << "enter next row";
        }
        cout << "enter matrix two rows and col";
        int rows2, col2;
        cout << "enter rows2";
        cin >> rows2;
        cout << "enter col2";
        cin >> col2;
        int matrix2[rows2][col2];
        cout << "fill the matrix ";
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cin >> matrix2[i][j];
            }
            cout << "enter next row";
        }

        if (col1 != rows2)
            return;
        int finalMatrix[rows1][col2];
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int sum = 0;
                for (int k = 0; k < col1; k++)
                {
                    sum += matrix[i][k] * matrix2[k][j];
                }
                finalMatrix[i][j] = sum;
            }
        }
        cout << "Resulting matrix:\n";
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << finalMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int problem= 0;
    Matrix matrix;
    cout<<"Enter 1 for multiple , 2 for translate , 3 for scale";
    cin>>problem;
    if(problem == 1)
    matrix.matrixMultiple();
    else if(problem == 2)
    matrix.Translate();
    else if(problem == 3)
    matrix.scale();

}