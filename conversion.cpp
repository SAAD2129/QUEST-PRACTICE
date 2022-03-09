#include <iostream>

using namespace std;

int main()
{

    float milestokms = 1.60934;
    float meterstokms = 0.001;
    float inchestofoot = 0.0833333;
    float inchestometers = 0.0254;
    float cmstometers = 0.01;
    float milestometers = 1609.34;
    double first;
    double second;
    int choice;
    int quantity;

    while (choice != 0)
    {
        cout << "\n1.milestokms\n2.meterstokms\n3.inchestofoot\n4.inchestometers\n5.cmstometers\n6.milestometers \nEnter Q to exit the Program     ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter the quantity ";
            cin >> first;
            second = first * 1.60934;
            cout << first << " miles is equal to " << second << " kms\n";
            break;

        case 2:
            cout << "Enter the quantity ";
            cin >> first;
            second = first * 0.001;
            cout << first << " meters is equal to " << second << " kms\n";
            break;
        case 3:
            cout << "Enter the quantity ";
            cin >> first;
            second = first * 0.0833333;
            cout << first << " inches is equal to " << second << " foot\n";
            break;
        case 4:
            cout << "Enter the quantity ";
            cin >> first;
            second = first * 0.0254;
            cout << first << " inches is equal to " << second << " meters\n";
            break;
        case 5:
            cout << "Enter the quantity ";
            cin >> first;
            second = first * 0.01;
            cout << first << " cms is equal to " << second << " meters\n";
            break;
        case 6:
            cout << "Enter the quantity ";
            cin >> first;
            second = first * 1609.34;
            cout << first << " miles is equal to " << second << " meters\n";
            break;

        default:
            cout << "\nInvalid Choice! Try again.....\n";
            break;
        }
        
    }
    cout << "Quiting the Program..... ";

    return 0;
}