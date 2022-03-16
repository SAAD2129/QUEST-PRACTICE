#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int matrix[3][3];
    int matrix2[3][3];
    int Sum[3][3];
    cout << "Enter the numbers for the matrix (3x3)\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Enter the numbers for the matrix2 (3x3)\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "\n1st Matrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n2ndMatrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << "\n";
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j] + matrix2[i][j];
            Sum[i][j] = sum;
            sum = 0;
        }
        cout << "\n";
    }
    // cout << "\nSum matrix is\n";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << Sum[i][j] << "\t";
    //     }

    //     cout << "\n";
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += matrix[i][k] * matrix2[k][j];
            }
            Sum[i][j] = sum;
            sum = 0;
        }
    }

    cout << "\nMulitplication matrix is\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Sum[i][j] << "\t";
        }

        cout << "\n";
    }

    return 0;
}