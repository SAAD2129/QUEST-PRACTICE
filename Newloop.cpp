#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "ENter the number of rows";
    cin >> rows;
    // inverted
    //  for (int i = rows; i >= 1; i--)
    //  {
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << j;
    //      }
    //      cout << "\n";
    //  }
    //  Rhombus Pattern

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {

    //         cout << " ";
    //     }
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << "\n";
    // }
    // Number Pattern
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << "\n";
    }

    return 0;
}