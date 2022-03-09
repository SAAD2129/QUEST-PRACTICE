#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>

using namespace std;

//--> Function for Volume...
// float Volume(int height, int length, int width)
// {
//     return height * length * width;
// }
// //--> Function for area...
// float Area(int length, int width)
// {
//     return length * width;
// }

//--> Factorial Using Recursions
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     else
//         return n * factorial(n - 1);
// }

// int Pass(double a, double b, double c, double d)
// {

//     return (a >= 40 && b >= 40 && c >= 40 && d >= 40);
// }
// void Grade(int percentage)
// {
//     if (percentage <= 100 && percentage >= 80)
//     {
//         cout << "Grade A";
//     }
//     else if (percentage >= 70 && percentage < 80)
//     {
//         cout << "Grade B";
//     }
//     else if (percentage >= 60 && percentage < 70)
//     {
//         cout << "Grade C";
//     }
//     else
//     {
//         cout << "No Grade";
//     }
// }
int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else return fib(n - 1) + fib(n - 2);
}

int main()
{
    // int volume, height, length, width;
    // cin >> height;
    // cin >> width;
    // cin >> length;
    // //--> Calling from main
    // cout << "The volume is " << Volume(height, length, width) << endl;
    // cout << "The volume is " << Area(length, width);
    // int n;
    // cin >> n;
    // cout << "The factorial of " << n << " is " << factorial(n);
    // cout << Pass(50, 50, 30, 50) << endl;
    // cout << Pass(50, 50, 50, 50);
    // int Percentage;
    // int subject1, subject2, subject3, subject4;
    // cout << "\nEnter the value of subject1 ";
    // cin >> subject1;
    // cout << "\nEnter the value of subject2 ";
    // cin >> subject2;
    // cout << "\nEnter the value of sub3 ";
    // cin >> subject3;
    // cout << "\nEnter the value of subjec4 ";
    // cin >> subject4;
    // if (Pass(subject1, subject2, subject3, subject4))

    // {
    //     int Percentage = (subject1 + subject2 + subject3 + subject4) * 100 / 400;
    //     cout << "\nPercentage is = " << Percentage;
    //     Grade(Percentage);
    // }
    // else
    // {
    //     cout << "\n--> !!! You are FAILED !!! <-- ";
    // }
    int n;
    cout << "Enter the number of fibonnaci series";
    cin >> n;
    cout << "The sum up to " << n << " is " << fib(n);
    return 0;
}