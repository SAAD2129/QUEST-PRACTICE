#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "COMPOSITE";
        }
        else
        {
            cout << "Prime";
        }
    }

    return 0;
}