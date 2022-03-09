#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i < 30; i++)
    {

        if ((i % 2) == 0)
        {
            sum += (-((i * (i + 1)) / (2 * i + (1))));
        }
        else
        {
            sum += ((i * (i + 1)) / (2 * i + (1)));
        }
    }
    cout << sum;

    return 0;
}