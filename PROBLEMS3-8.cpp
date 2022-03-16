#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <climits>

using namespace std;

int KeySearch(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return false;
}

int main()
{
    int n;
    int key;
    cout << "Enter the number to declare an array ";
    cin >> n;
    int array[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        // sum += array[i];
    }
    // cout << sum;
    cout << "\nEnter the number to be found ";
    cin >> key;
    cout << "\nSearching For number index ";

    // Calling the Function here to find key
    KeySearch(array, n, key);
    if (KeySearch(array, n, key))
    {
        cout << "\nThe index for " << key << " is " << KeySearch(array, n, key);
    }
    else
    {
        cout << "\nThe number is not present in the array";
    }
    //-->  Write a program to perform some of 2 array values at the same index into an array <--
    // int n;
    // cin >> n;
    // int array1[n], array2[n];
    // // for getting values for 1st ar
    // cout << "Enter the numbers of first & second array";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array1[i] >> array2[i];
    // }
    // // cout << "Enter the numbers of second array";
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cin >> array2[i];
    // // }

    // cout << "\nThe added values of arrays are \n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array1[i] << " " << array2[i] << " = " << array1[i] + array2[i] << endl;
    // }
    // Here assigment the added value to the 3rd array
    // for (int i = 0; i < n; i++)
    // {
    //     array3[i] = array1[i] + array2[i];
    // }
    // cout << "\nThe value added ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array3[i] << " ";
    // }
    return 0;
}