#include <iostream>

using namespace std;

int main()
{
    int rows;
    int choice;

    while (choice != 0)
    {
        cout << "Enter 1 to print Triangular Star Pattern & 2 to print Reversed Triangular Star Pattern \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of Rows ";
            cin >> rows;
            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= rows + 1 - i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }
            break;

        case 2:
            cout << "Enter the number of Rows ";
            cin >> rows;
            for (int i = 0; i <= rows; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }

            break;

        default:
            cout << "Invalid Choice Try again";
            break;
        }
    }
    return 0;
}