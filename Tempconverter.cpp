#include <iostream>

using namespace std;

int main()
{
    int choice;

    double C, F;

    while (choice != 0)
    {
        cout << "Enter 1 to Convert Faherneit to Centigrade & 2 to Convert Centigrade to Faherneit & 0 to Quit the Program\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            cout << "Enter the Temperature to Convert\n";
            cin >> F;
            C = (F - 32) * 5 / 9;
            cout << F << " Faherneit is equal to " << C << " Centigrade\n";
        }
        break;

        case 2:

            cout << " \nEnter the Temperature to Convert\n ";
            cin >> C;
            F = (C * 9 / 5) + 32;
            cout << C << " Centigrade is equal to " << F << " Faherneit\n";
            break;
        default:
            cout << "Enter the Valid Choice\n ";
        }
    }
    cout << "\nQuiting the Program ";
    return 0;
}