#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> array[i];
    //     if (i % 2 == 0)
    //     {
    //         array[i] = 0;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (i % 2 == 0)
        {
            array[i] = 0;
        }
        else
        {
            array[i] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}