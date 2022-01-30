#include <iostream>

using namespace std;

int main()
{
    double number1, number2;
    char op;
    cout << "\nCalculate ";
    cin >> number1 >> op >> number2;

    if (op == '+')
    {
        cout << "\nThe sum is " << number1 + number2;
    }
    else if (op == '-')
    {
        cout << "\nThe subtraction is " << number1 - number2;
    }
    else if (op == '/')
    {
        cout << "\nThe division is " << number1 / number2;
    }
    else if (op == '*')
    {
        cout << "\nThe  multiplicaiton is " << number1 * number2;
    }
    else
    {
        cout << "\nEnter the valid operater";
    }

    return 0;
}