#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>

using namespace std;

// double Quadratic(double a, double b, double c)
// {
//     double x1 = 0, x2 = 0;
//     x1 = -b + sqrt((b * b) - 4 * a * c) / 2 * a;
//     x2 = -b - sqrt((b * b) - 4 * a * c) / 2 * a;
//     cout << "The x1 & x2 are " << x1 << endl
//          << x2;
//     return x1, x2;
// }
//--> nan is displayed due answer is uhdefined

// // Hostel Work
// 1.write a program using function arguments passing to tell the roots are complex,real or equal ..-->
float Roots(int a, int b, int c)
{
    long double D;
    //-->  Here D is Discrimenent
    D = (b * b) - 4 * a * c;
    return D;
}

// void repchar(char a, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a;
//     }
// }

int main()
{
    double a, b, c;
    double D;
    cout << "\nEnter the numbers ";
    cin >> a >> b >> c;
    D = Roots(a, b, c);

    if (D > 0)
    {
        cout << "\nThe Root are Real & Equal " << D << endl;
    }
    else if (D < 0)
    {
        cout << "\nThe Root are Complex OR Imaginary " << D << endl;
    }
    else
    {
        cout << "\nThe Roots are equal " << D << endl;
    }
    // int number;
    // char symbol;
    // cout << "Enter the number ";
    // cin >> number;
    // cout << "Enter the character ";
    // cin >> symbol;
    // repchar(symbol, number);

    // int num;
    // cout << "\nEnter the number to check if it is even or not";
    // cin >> num;
    // Even(num);

    // cout << "\nEnter the numbers ";
    // cin >> a >> b >> c;
    // cout << "\nThe value of x1 & x2 is equal to " << Quadratic(a, b, c);
    return 0;
}