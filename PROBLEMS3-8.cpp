#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <climits>

using namespace std;

int Array(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int key;
    cin >> n;
    int sum = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        // sum += array[i];
    }
    cin >> key;
    cout << "Searching For number index ";
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            cout << "\nThe index " << array[i] << " is " << i;
            break;
        }

    // cout << "NO Number matched" << endl;
    }

    // cout << sum;

    // cin >> key;
    // Calling the Function here to find key
    // cout << Array(array, n, key);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << " ";
    // }

    return 0;
}