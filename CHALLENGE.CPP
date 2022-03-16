#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <climits>

using namespace std;
/*
Make a Program having four different types cases 1.currency exchange{
    having four conversions  rs to dollor euros cyn gbp
}
2.Tax rupees*20/100;

3.About Developer ( This is codeXsaad form moro his aim is to make an empire & coding is his passion he loves a girls & he wants that girl in quest sw Department roll 24 loves 25 that's all about me   )


*/
int main()
{
    double rupees, dollar = 174, euro = 195.82, cyn = 28.10, gbp = 233.46, tax;
    int choice1, choice2;
    cout << "Enter the choice 1\n1.Currency Exchange\n2.Tax Rupees\n3.About Dev\n";
    cin >> choice1;
    switch (choice1)
    {
    case 1:
        cout << "\nEnter the choice 2 for\n1.Pkr to Dollars\n2.Pkr to Euros\n3.Pkr to Cny\n4.Pkr to Gbp\n";
        cin >> choice2;
        switch (choice2)
        {

        case 1:
            cout << "\nEnter the amount to convert in dollars ";
            cin >> rupees;
            cout << rupees << " pkr to " << rupees / dollar << " dollars";
            break;
        case 2:
            cout << "\nEnter the amount to convert in euro ";
            cin >> rupees;
            cout << rupees << " pkr to " << rupees / euro << " euro";
            break;
        case 3:
            cout << "\nEnter the amount to convert in cny ";
            cin >> rupees;
            cout << rupees << " pkr to " << rupees / cyn << " cyn";
            break;
        case 4:
            cout << "\nEnter the amount to convert in gbp ";
            cout << rupees << " pkr to " << rupees / gbp << " gbp";
            cin >> rupees;
            break;

        default:
            cout << "\nInvalid Choice";
            break;
        }
        break;
    case 2:
        cout << "\nEnter the rupees ";
        cin >> rupees;
        if (rupees > 35000)
        {
            tax = rupees * 20 / 100;
            cout << "\nThe tax on " << rupees << " is " << tax;
        }
        else
        {
            cout << "\nThere is no tax on " << rupees;
        }
    case 3:
        cout << "\nThis is codeXsaad form moro his aim is to make an empire & coding is his passion.";
        break;
    }
    cout << "\nChallenge was accepted ";
    return 0;
}