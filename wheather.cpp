#include <iostream>

using namespace std;
// make program that tells  the temperature is hot or cold using while loop
int main()
{
    int temp;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y')
    {
        cout << "Enter the temperature ";
        cin >> temp;

        if (temp >= 40)
        {
            cout << "It is too hot outside\n\n";
        }
        else if (temp < 40 && temp >= 25)
        {
            cout << "Its Hot\n\n";
        }
        else if (temp < 25 && temp >= 10)
        {
            cout << "Its Normal\n\n";
        }
        else
        {
            cout << "Its too Cold\n\n";
        }
        cout << "Enter  Y to continue & N to exit ";
        cin >> choice;
    }

    return 0;
}
