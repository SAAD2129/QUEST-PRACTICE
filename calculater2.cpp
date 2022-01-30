#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "Calculate";
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '*':
        cout << "The Multiplication is " << num1 * num2;
        break;
    case '+':
        cout << "The Addition is " << num1 + num2;
        break;
    case '-':
        cout << "The Subtraction is " << num1 - num2;
        break;
    case '/':
        cout << "The Division is " << num1 / num2;
        break;

    default:
        cout << "Enter the valid operator";
        break;
    }

    return 0;
}