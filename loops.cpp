#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows ";
    cin >> rows;
    // inverse Triangle

    //  for (int i = 1; i <= rows; i++)
    //  {
    //      for (int j = 1; j <= rows; j++)
    //      {
    //          if (j <= rows - i)
    //          {
    //              cout << " ";
    //          }
    //          else
    //          {
    //              cout << i;
    //          }
    //      }
    //      cout << "\n";
    //  }
    // floyeds Triangele
    //  int num = 1;
    //  for (int i = 1; i <= rows; i++)
    //  {
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << num<<" ";
    //          num++;
    //      }
    //      cout << endl;
    //  }

    // Butter Fly Pattern
    //  for (int i = 1; i <= rows; i++)
    //  {
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << "*";
    //      }
    //      int space = 2 * rows - 2 * i;
    //      for (int j = 1; j <= space; j++)
    //      {
    //          cout << " ";
    //      }
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << "*";
    //      }

    //     cout << "\n";
    // }

    // for (int i = rows; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * rows - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << "\n";
    // }
    //  Palindromic pattern
    // for (int i = 1; i <= rows; i++)
    // {
    //     int j;
    //     for (j = 1; j <= rows - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     int k = i;
    //     for (; j <= rows; j++)
    //     {
    //         cout << k-- << " ";
    //     }

    //     for (int j = 2; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << "\n";
    // }
    // Print Diamond using Stars : Given n, print diamond with 2*n rows
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //             cout << "*";
    //     }
    //     for (int j = 2; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << "\n";
    // }
    // for (int i = rows; i >=1; i--)
    // {
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //             cout << "*";
    //     }
    //     for (int j = 2; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << "\n";
    // }
    // Hollow Diamond using Stars

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {

            if ((i + j) % 6 == 0)
            {
                cout << "*";
            }

            else
                cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 ==1
            ||(i+j)%2==0)
            {
                /* code */ cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}