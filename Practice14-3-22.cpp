#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >>
        a >> b >> c >> d;
    int array1[a]
              [b];
    int array2[c]
              [d];
    int result[a]
              [d];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)

        {
            cin >> array1[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> array2[i][j];
        }
    }
    // [4 4 4 5]
    // a*d
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            int sum = 0;
            for (int k = 0; k < d; k++)
            {
                sum += array1[i][k] * array2[j][k];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}