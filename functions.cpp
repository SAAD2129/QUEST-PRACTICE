#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

//--> Example of Overloaded function in c++ <--
// double Division(double a, double b)
// {

//     return float(a / b);
// }
// double Division(double a, double b, double c)
// {

//     return ((a / b) * c);
// }
//--> Function without Return value & without Arguments
// void PrintStar()
// {
//     int rows;
//     cout << "\nEnter the number of rows to Print Stars";
//     cin >> rows;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             /* code */ cout << "*";
//         }
//         cout << "\n";
//     }
// }
//--> Function with Return value & with Arguments
// int Sum(int a, int b, int c)
// {
//     return (a + b + c);
// }
//--> Function having no Return value & with Arguments
// void Sum(int a, int b, int c)
// {
//     cout << "The sum is " << a + b + c;
// }
//--> Function having  Return value & no Arguments
// int sum(void)
// {
//     int num1, num2, num3;
//     cout << "\nEnter the numbers";
//     cin >> num1 >> num2 >> num3;
//     cout << "\nThe Sum is " << num1 + num2 + num3;
// }
int main()
{
    // int num1, num2, num3;

    // cout << "\nEnter the numbers";
    // cin >> num1 >> num2 >> num3;

    //--> Example of Overloaded function in c++ <--
    // cout << "\nThe Division Using Function with 2 arguments is " << Division(num1, num2);
    // cout << "\nThe Division Using Function with 3 arguments is " << Division(num1, num2, num3);

    // --> Example of Function having no return value & no arguments;
    // PrintStar();
    
    // --> Example of Function having return value & arguments
    // cout << "\nThe Sum of is " << Sum(num1, num2, num3);

    //--> Example of Function having no Return value & with Arguments
    // Sum(num1, num2, num3);
    
    //--> Example of Function having Return value & no Arguments
    // sum();
    return 0;
}