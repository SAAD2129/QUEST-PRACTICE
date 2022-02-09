#include <iostream>

using namespace std;

int main()
{
    /* Write a program to calculate income tax based on employe salary .
    income tax is 10% of the salary amount .
    calculate tax amount per month & per year */
    // double income, T_year, T_month;
    // cout << "Enter the amount of income per month ";
    // cin >> income;
    // T_year = 12 * (income * 10 / 100);

    // T_month = income * 10 / 100;
    // cout << "\nTax per year is " << T_year;

    // cout << "\nTax per month is " << T_month;

    // double income, T_year, T_month;
    // cout << "Enter the amount of income per month ";
    // cin >> income;
    // if (income >= 35000)
    // {
    //     T_year = 12 * (income * 10 / 100);
    //     T_month = income * 10 / 100;

    //     cout << "\nTax per year is " << T_year;
    //     cout << "\nThe salary of total year is  " << 12 * income;

    //     cout << "\nTax per month is " << T_month;
    //     cout << "\nThe salary per Month is  " << income;
    // }
    // else
    // {
    //     cout << "No Tax";
    // }
    /*Write a program to convert pkr into us dollars, euro,chinese uvan,&British Pound.
    rates of currency are as follows */
    // double rupees;
    // double dollar = 174.24;
    // double euro = 199.28;

    // double CNY = 27.42;
    // double GBP = 236.45;

    // int choice;
    // cout << " Enter the amount In PKR to be converted ";
    // cin >> rupees;

    // cout << endl
    //      << rupees << " Pkr is equal to  " << rupees / dollar << " dollars";
    // cout << endl
    //      << rupees << " Pkr is equal to " << rupees / euro << " euros";
    // cout << endl
    //      << rupees << " Pkr is equal to " << rupees / GBP << " GBP";
    // cout << endl
    //      << rupees << " Pkr is equal to " << rupees / CNY << " CNY";

    /*Write a program to convert pkr to dollar,euro,cny,gbp.
    The processing charges of 6000rs. be applied if the amount in pakistan rupees is greater than 100000 are equal.
    then cout how much to be paid & also use else if the amount is less than 100000*/

    // USING SWITCH CASE STATEMENTS;
    double rupees;
    double dollar = 174.24;
    double euro = 199.28;

    double CNY = 27.42;
    double GBP = 236.45;

    cout << "\nDOLLAR " << dollar;
    cout << "\nEURO " << euro;
    cout << "\nCNY " << CNY;
    cout << "\nGBP " << GBP;
    int choice;

    while (choice != 0)
    {
        cout << "\nEnter the Choice For Conversion of PKR  \n1.DOLLAR\n2.EURO\n3.CNY\n4.GBP\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter the rupees in PKR ";
            cin >> rupees;
            if (rupees >= 100000)
            {
                cout << "\nThe Amount now to be given is with extra charges " << rupees + 6000 << "  Pkr into dollar converted is  " << rupees / dollar;
            }
            else
            {
                cout << "\nThe Amount now  to be given is " << rupees << " Pkr into dollar converted is  " << rupees / dollar;
                ;
            }
            break;
        case 2:
            cout << "\nEnter the rupees in PKR ";
            cin >> rupees;
            if (rupees >= 100000)
            {
                cout << "\nThe Amount now to be given is with extra charges " << rupees + 6000 << " Pkr into EURO converted is " << rupees / euro;
            }
            else
            {
                cout << "\nThe Amount now  to be given is " << rupees << " Pkr into EURO converted is  " << rupees / euro;
                ;
            }
            break;
        case 3:
            cout << "\nEnter the rupees in PKR ";
            cin >> rupees;
            if (rupees >= 100000)
            {
                cout << "\nThe Amount now to be given is with extra charges " << rupees + 6000 << " Pkr into CNY converted is  " << rupees / CNY;
            }
            else
            {
                cout << "\nThe Amount now  to be given is " << rupees << " Pkr into CNY converted is  " << rupees / CNY;
                ;
            }
            break;
        case 4:
            cout << "\nEnter the rupees in PKR ";
            cin >> rupees;
            if (rupees >= 100000)
            {
                cout << "\nThe Amount now to be given is with extra charges " << rupees + 6000 << " Pkr into GBP converted is  " << rupees / GBP;
            }
            else
            {
                cout << "\nThe Amount now  to be given is " << rupees << " Pkr into GBP converted is  " << rupees / GBP;
                ;
            }
            break;

        default:
            cout << "Entered Invalid Key!";
            break;
        }
    }
    return 0;
}