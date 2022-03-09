#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>

using namespace std;
void TriangularStarPattern()
{
    int rows;
    cout << "\nEnter the number of rows you want";

    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void ReversedTriangularStarPattern()
{
    int rows;
    cout << "\nEnter the number of rows you want";

    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void ButterFlyStarPattern()
{
    int rows;
    cout << "\nEnter the number of rows you want";

    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= 2 * rows - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}
void HoloStarPattern()
{
    int rows;
    cout << "\nEnter the number of rows you want";

    cin >> rows;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= rows; j++)
        {
            if (j == rows - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = rows; i >= 0; i--)
    {
        for (int j = 0; j <= rows; j++)
        {
            if (j == rows - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void ZigZagStarPattern()
{

    int rows;
    cout << "\nEnter the number of rows you want ";
    cin >> rows;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3 * rows; j++)
        {
            if ((i + j) % 4 == 0||(i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            // else if ()
            // {
            //     cout << "*";
            // }

            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int choice;
    cout
        << "\nEnter the Number Choice \n1.For Triangular Star Pattern\n2.Reversed Triangular Star Pattern\n3.Butter Fly Star Pattern\n4.Holo Star Pattern\n5.ZigZag Star Pattern ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        TriangularStarPattern();
        break;
    case 2:
        ReversedTriangularStarPattern();
        break;
    case 3:
        ButterFlyStarPattern();
        break;
    case 4:
        HoloStarPattern();
        break;
    case 5:
        ZigZagStarPattern();
        break;

    default:
        cout << "\nEntered Invalid Choice ";
        break;
    }

    return 0;
}