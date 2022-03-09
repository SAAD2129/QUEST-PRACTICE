#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    // -->THIS PROGRAM IS TO SUM UP THE DAYS TILL THE PRESENT DAY OF YEAR <--
    // int months, date, Total_days;

    // int total_days_month[12]{31, 28, 31, 30, 31, 30,
    //                          31, 31, 30, 31, 30, 31};
    // cout << "Enter the number of month ";
    // cin >> months;
    // cout << "Enter the date today";
    // cin >> date;
    // Total_days = date;
    // for (int i = 0; i < months - 1; i++)
    // {
    //     Total_days += total_days_month[i];
    // }
    // cout << "The total days till now are " << Total_days;

    // --> THIS PROGRAM IS TO CHECK IF A PARTICULAR YEAR IS LEAP OR NOT <--
    int year;
    cout << "Enter the number of days in this year";
    cin >> year;
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "it's Normal year";
    }
    // --> MAKE A PROGRAM FIND NUMBER OF DAYS ,WEEKS,HOURS FOR MONTH & DATE ENTERED BY USER <--
    // int months, date, Total_days;

    // int total_days_month[12]{31, 28, 31, 30, 31, 30,
    //                          31, 31, 30, 31, 30, 31};
    // cout << "Enter the number of month ";
    // cin >> months;
    // cout << "Enter the date today ";
    // cin >> date;
    // Total_days = date;
    // for (int i = 0; i < months - 1; i++)
    // {
    //     Total_days += total_days_month[i];
    // }
    // cout << "\nThe total days till now are " << Total_days;
    // cout << "\nThe total days till now in hours are " << Total_days * 24 << " hours";
    // cout << "\nThe total days till now in minutes are " << Total_days * 24 * 60 << " minutes";
    // cout << "\nThe total days till now in seconds are " << Total_days * 24 * 60 * 60 << " seconds";
    // cout << "\nThe total weeks are " << Total_days / 7;
    return 0;
}