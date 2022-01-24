#include <iostream>

using namespace std;

int main()
{
    double per, english, maths, programming;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        cout << "Enter  the Maths Marks ";
        cin >> maths;
        if (maths <= 40)
        {
            cout << "\nFail in maths";
        }

        cout << "\nEnter  the English Marks ";
        cin >> english;
        if (english <= 40)
        {
            cout << "\nFail in English";
        }

        cout << "\nEnter  the Programming  Marks ";
        cin >> programming;
        if (programming <= 40)
        {
            cout << "\nFail in programming";
        }
        per = (english + programming + maths) * 100 / 300;
        if (per > 81 && per <= 100)
        {
            cout << "\nA Grade ";
        }
        else if (per >= 71 && per <= 80)
        {
            cout << "\nB Grade ";
        }
        else if (per >= 61 && per <= 70)
        {
            cout << "\nC Grade ";
        }

        else if (per >= 50 && per <= 60)
        {
            cout << "\nD Grade ";
        }
        else
        {
            cout << "\nFail in all subjects";
        }
        cout << "\nEnter y to conitnue & n to exit the program ";
        cin >> choice;
    }
    return 0;
}