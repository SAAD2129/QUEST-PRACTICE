#include <iostream>

using namespace std;

int main()
{
    int rows;
    int i = 1, j;
//    while (rows != 0)
//     {
//         cout << "Enter the number of rows Enter 0 to EXIT ";
//         cin >> rows;
//         // using for loop
//         for (int i = 1; i <= rows; i++)
//         {
//             for (int j = 1; j <= 10; j++)
//             {
//                 cout << i * j << "\t";
//             }
//             cout << "\n";
//         }
//     }

//     // using while
    // while (rows != 0)
    // {
    //     cout << "Enter the number of rows Enter 0 to EXIT ";
    //     cin >> rows;

    //     while (i <= rows)
    //     {
    //         j = 1;
    //         while (j <= 10)
    //         {

    //             cout << j * i << "\t";
    //             j++;
    //         }
    //         cout << "\n";
    //         i++;
    //     }
    // }

    // using do while
    while (rows != 0)
    {   cout<<"Using do while loop";
        cout << "Enter the number of rows Enter 0 to EXIT ";
        cin >> rows;
        
        
        do
        {
            j = 1;

            do
            {
                cout << j * i << "\t";
                j++;
            } while (j <= 10);
            cout << "\n";

            i++;

        } while (i <= rows);
    }

    

    return 0;
}