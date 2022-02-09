#include <iostream>

using namespace std;

int main()
{
    long double num1, num2;
    char op;
    cout << "Calculate";
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '*':
        cout << "The Multiplication is " << (long double)num1 * num2;
        break;
    case '+':
        cout << "The Addition is " << (long double)num1 + num2;
        break;
    case '-':
        cout << "The Subtraction is " << (long double)num1 - num2;
        break;
    case '/':
        cout << "The Division is " << (long double)num1 / num2;
        break;

    default:
        cout << "Entered the valid operator";
        break;
    }

    return 0;
}