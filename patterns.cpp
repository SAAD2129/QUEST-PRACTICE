#include <iostream>

using namespace std;

int main()
{
    int i = 1, j, rows;
    // cout << "Enter the number of rows ";
    // cin >> rows;
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *  this pattern using all loops
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }
    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         cout << "*";
    //         j++;
    //     } while (j <= i);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    // *****
    // *****
    // *****
    // ***** this pattern using all loops
    // *****

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         cout << "*";
    //         j++;
    //     } while (j <= rows);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    // *****
    // *   *
    // *   * this pattern using all loops
    // *   *
    // *****
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows; j++)
    //     {
    //         if (i == 1 || i == rows || j == 1 || j == rows)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows)
    //     {
    //         if (i == 1 || i == rows || j == 1 || j == rows)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         if (i == 1 || i == rows || j == 1 || j == rows)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //         j++;
    //     } while (j <= rows);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    // * * * * *
    // * * * *
    // * * * this pattern using all loops
    // * *
    // *

    //  for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows-i+1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows-i+1)
    //     {
    //         cout << "*" ;
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }
    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         cout << "* ";
    //         j++;
    //     } while (j <= rows-i+1);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    //     *
    //    **this pattern using all loops
    //   ***
    //  ****

    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j<<" ";
    //     }
    //     cout << "\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << j<<" ";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         cout << j<<" ";
    //         j++;
    //     } while (j <= i);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    // 1
    // 12
    // 123
    // 1234 this pattern using all loops
    // 12345
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j<<" ";
    //     }
    //     cout << "\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << j<<" ";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         cout << j<<" ";
    //         j++;
    //     } while (j <= i);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows - i + 1; j++)
    //     {
    //         cout << j<<" ";
    //     }
    //     cout << "\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows+1-i)
    //     {
    //         cout << j<<" ";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         cout << j<<" ";
    //         j++;
    //     } while (j <=rows+1-i);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    // 1
    // 22
    // 333
    // 4444
    // 55555 this pattern using all loops
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i<<" ";
    //     }
    //     cout << "\n";
    // }

    // while (i<=rows)
    // {j=1;
    //     while(j<=i)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     i++;cout<<"\n";
    // }
    // do
    // {j=1;
    //     do
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     } while (j<=i);
    //     i++;cout<<"\n";
    // } while (i<=rows);

    // 1 1 1 1 1
    // 2 2 2 2
    // 3 3 3
    // 4 4  this using all loops
    // 5
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows + 1 - i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << "\n";
    // }
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows+1-i)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }
    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         cout << i;
    //         j++;
    //     } while (j <= rows + 1 - i);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    // 1
    // 2  3
    // 4  5  6
    // 7  8  9  10 this using all loops exist
    // 11 12 13 14

    // int num = 0;
    // for (int i = 0; i <= rows; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {

    //         num++;
    //         cout << num << "\t";
    //     }
    //     cout << "\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         num++;
    //         cout << num << "\t";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         num++;
    //         cout << num << "\t";
    //         j++;
    //     } while (j <= i);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1 this using all loops
    // 1 0 1 0 1
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << "\n";
    // }
    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= i)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 1;
    //     do
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //         j++;
    //     } while (j <= i);
    //     cout << "\n";
    //     i++;
    // } while (i <= rows);

    //     *
    //    ***
    //   *****
    //  *******
    //  *******
    //   *****
    //    ***
    //     *
    // for (int i = 0; i <= rows; i++)
    // {
    //     for (int j = 0; j <= rows; j++)
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // for (int i = rows; i >= 0; i--)
    // {
    //     for (int j = 0; j <= rows; j++)
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // i = 0;
    // while (i <= rows)
    // {
    //     j = 0;
    //     while (j <= rows)
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //         j++;
    //     }
    //     j = 0;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }
    // i = rows;
    // while (i >=0)
    // {
    //     j = 0;
    //     while (j <= rows)
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //         j++;
    //     }
    //     j = 0;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << "\n";
    //     i--;
    // }

    // i = 0;
    // do
    // {
    //     j = 0;
    //     do
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //         j++;
    //     } while (j <= rows);
    //     j = 0;
    //     do
    //     {
    //         cout << "*";
    //         j++;
    //     } while (j <= i);

    //     i++;
    //     cout << "\n";
    // } while (i <= rows);
    // i = rows;
    // do
    // {
    //     j = 0;
    //     do
    //     {
    //         if (j <= rows - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //         j++;
    //     } while (j <= rows);
    //     j = 0;
    //     do
    //     {
    //         cout << "*";
    //         j++;
    //     } while (j <= i);

    //     i--;
    //     cout << "\n";
    // } while (i >= 0);
    //     *****
    //    *****
    //   *****
    //  *****
    // *****
    // for (int i = 0; i <= rows; i++)
    // {
    //     for (int j = 0; j <= rows - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j <= rows; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<"\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows - i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     j = 1;
    //     while (j <= rows)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 0;
    //     do
    //     {
    //         cout << " ";
    //         j++;
    //     } while (j <= rows - i);
    //     j = 0;
    //     do
    //     {
    //         cout << "*";
    //         j++;
    //     } while (j <= rows);
    //      i++;
    //       cout << "\n";

    // } while (i <= rows);

    //     *****
    //    *   *
    //   *   *
    //  *   *
    // *****
    // for (int i = 0; i <= rows; i++)
    // {
    //     for (int j = 0; j <= rows - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j <= rows; j++)
    //     {
    //         if (i == 0 || j == 0 || j == rows || i == rows)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // while (i <= rows)
    // {
    //     j = 1;
    //     while (j <= rows - i)
    //     {
    //         cout << " ";
    //         j++;
    //     }
    //     j = 1;
    //     while (j <= rows)
    //     {
    //         if (i == 1 || j == 1 || j == rows || i == rows)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // do
    // {
    //     j = 0;
    //     do
    //     {
    //         cout << " ";
    //         j++;
    //     } while (j <= rows - i);
    //     j = 0;
    //     do
    //     {
    //         if (j == 0 || i == 1 || i == rows || j == rows)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //         j++;
    //     } while (j <= rows);
    //     i++;
    //     cout << "\n";

    // } while (i <= rows);
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << k << " ";
    //     }
    //     cout << "\n";
    // }

    // int num;
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     num = i;
    //     for (int k = 1; k <= i; k++)
    //     {

    //         cout << num << " ";
    //         num--;
    //     }
    //     for (int l = 2; l <= i; l++)
    //     {
    //         cout << l << " ";
    //     }

    //     cout << "\n";
    // }
    //      *
    //     ***
    //    *****
    //   ******* this pattern using for loop
    //   *******
    //    *****
    //     ***
    //      *

    //     int num;
    // for (int i = 0; i <= rows; i++)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     num = i;
    //     for (int k = 1; k <= 2 * i + 1; k++)
    //     {

    //         cout << "* ";
    //         // num--;
    //     }
    //     // for (int l = 2; l <= i; l++)
    //     // {
    //     //     cout << "* ";
    //     // }

    //     cout << "\n";
    // }
    // for (int i = rows; i >= 0; i--)
    // {
    //     for (int j = 1; j <= rows - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     num = i;
    //     for (int k = 1; k <= 2 * i + 1; k++)
    //     {

    //         cout << "* ";
    //         // num--;
    //     }
    //     // for (int l = 2; l <= i; l++)
    //     // {
    //     //     cout << "* ";
    //     // }

    //     cout << "\n";
    // }

    //      *     *     *     *
    //    *  *  *  *  *  *  *  *
    //  *     *     *     *     * zigzag pattern upto nth number of columns
    cout << "Enter the number of columns in the multiples of 3 ";
    int columns;
    cin >> columns;
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= columns*3; j++)
    //     {
    //         if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }
    // for (int i = 3; i >= 1; i--)
    // {
    //     for (int j = 1; j <= columns*3; j++)
    //     {
    //         if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }
    // WHILE LOOP
    // while (i <= 3)
    // {
    //     j = 1;
    //     while (j <= columns * 3)
    //     {
    //         if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //         j++;
    //     }
    //     i++;
    //     cout<<"\n";
    // }
    do
    {
        j = 1;
        do
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            j++;
        } while (j <= columns * 3);
        cout << "\n";
        i++;
    } while (i <= 3);

    return 0;
}