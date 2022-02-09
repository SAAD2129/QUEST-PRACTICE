#include <iostream>

using namespace std;

int main()
{
    /*
    1.What is switch statement discuss it's syntax.
    2.what is the use of break statment in c++ programming
    3.DISCUSS THE CONTINUE STATMENT OF C++
    */
    //     USING WHILE
    //     double A, l, h, r, b, s;
    //     float PI = 3.14;
    //     int choice;
    //     char choice1 = 'y';

    //     while (choice1 == 'y')
    //     {
    //         cout << "1.Area of Circle \n2.Area of Triangle \n3.Area of Square \n4.Area of Rectangle\n";
    //         cin >> choice;
    //         switch (choice)
    //         {
    //         case 1:
    //             cout << "\nEnter the value of Radius  ";
    //             cin >> r;
    //             A = PI * r * r;
    //             cout << "\nThe Area of Circle is " << A;
    //             break;
    //         case 2:
    //             cout << "\nEnter the value of Base  ";
    //             cin >> b;
    //             cout << "\nEnter the value of hypotenuse ";
    //             cin >> h;
    //             A = 0.5 * h * b;
    //             cout << "\nThe Area of Triangle is " << A;
    //             break;
    //         case 3:
    //             cout << "\nEnter the value of side  ";
    //             cin >> s;
    //             A = s * s;
    //             cout << "\nThe Area of Square is " << A;
    //             break;
    //         case 4:
    //             cout << "\nEnter the value of length  ";
    //             cin >> l;
    //             cout << "\nEnter the value of height  ";
    //             cin >> h;
    //             A = l * h;
    //             cout << "\nThe Area of Rectangle is " << A;
    //             break;

    //         default:
    //             cout << "\nINVALID CHOICE ";
    //             break;
    //         }
    //         cout << "\nEnter y to continue  ";
    //         cin >> choice1;
    //     }

    //     USING DO WHILE
    //     long double  A, l, h, r, b, s;
    //     float PI = 3.14;
    //     int choice;
    //     char choice1 = 'y';
    //     do
    //     {
    //         cout << "1.Area of Circle \n2.Area of Triangle \n3.Area of Square \n4.Area of Rectangle\n";
    //         cin >> choice;
    //         switch (choice)
    //         {
    //         case 1:
    //             cout << "\nEnter the value of Radius  ";
    //             cin >> r;
    //             A = PI * r * r;
    //             cout << "\nThe Area of Circle is " << A;
    //             break;
    //         case 2:
    //             cout << "\nEnter the value of Base  ";
    //             cin >> b;
    //             cout << "\nEnter the value of hypotenuse ";
    //             cin >> h;
    //             A = 0.5 * h * b;
    //             cout << "\nThe Area of Triangle is " << A;
    //             break;
    //         case 3:
    //             cout << "\nEnter the value of side  ";
    //             cin >> s;
    //             A = s * s;
    //             cout << "\nThe Area of Square is " << A;
    //             break;
    //         case 4:
    //             cout << "\nEnter the value of length  ";
    //             cin >> l;
    //             cout << "\nEnter the value of height  ";
    //             cin >> h;
    //             A = l * h;
    //             cout << "\nThe Area of Rectangle is " << A;
    //             break;

    //         default:
    //             cout << "\nINVALID CHOICE ";
    //             break;
    //         }
    //         cout << "\nEnter y to continue  ";
    //         cin >> choice1;
    //     }while (choice1 == 'y');

    //     CONVERION USING DO WHILE LOOP
    //      double f, c;
    //      char choice1;
    //      char choice;
    //      do
    //      {
    //          cout << "\nEnter the conversion you want f/c  ";
    //          cin >> choice;
    //          switch (choice)
    //          {

    //         case 'f':
    //             cout << "\nEnter the value in Celcius ";
    //             cin >> c;
    //             f = 9 * c / 5 + 32;
    //             cout << c << " Celcuis is equal to " << f << " Fahrenheit";
    //             break;
    //         case 'c':
    //             cout << "\nEnter the value in Fahrenheit ";
    //             cin >> f;
    //             c = (f - 32) * 5 / 9;
    //             cout << f << " Fahrenheit is equal to " << c << " Celcius";
    //             break;
    //         case 'F':
    //             cout << "\nEnter the value in Celcius ";
    //             cin >> c;
    //             f = f = 9 * c / 5 + 32;
    //             cout << c << " Celcuis is equal to " << f << " Fahrenheit";
    //             break;
    //         case 'C':
    //             cout << "\nEnter the value in Fahrenheit ";
    //             cin >> f;
    //             c = (f - 32) * 5 / 9;
    //             cout << f << " Fahrenheit is equal to " << c << " Celcius";
    //             break;

    //         default:
    //             cout << " Invalid Choice Try Again ";
    //             break;
    //         }
    //         cout << "\nDo you Want to Continue ";
    //         cin >> choice1;
    //     } while (choice1 == 'y' || choice1 == 'Y');

    //     CONVERSION USING WHILE LOOP
    //     double f, c;
    //     char choice1 = 'Y';
    //     char choice;
    //     while (choice1 == 'y' || choice1 == 'Y')

    //     {
    //         cout << "\nEnter the conversion you want f/c  ";
    //         cin >> choice;
    //         switch (choice)
    //         {

    //         case 'f':
    //             cout << "\nEnter the value in Celcius ";
    //             cin >> c;
    //             f = 9 * c / 5 + 32;
    //             cout << c << " Celcuis is equal to " << f << " Fahrenheit";
    //             break;
    //         case 'c':
    //             cout << "\nEnter the value in Fahrenheit ";
    //             cin >> f;
    //             c = (f - 32) * 5 / 9;
    //             cout << f << " Fahrenheit is equal to " << c << " Celcius";
    //             break;
    //         case 'F':
    //             cout << "\nEnter the value in Celcius ";
    //             cin >> c;
    //             f = f = 9 * c / 5 + 32;
    //             cout << c << " Celcuis is equal to " << f << " Fahrenheit";
    //             break;
    //         case 'C':
    //             cout << "\nEnter the value in Fahrenheit ";
    //             cin >> f;
    //             c = (f - 32) * 5 / 9;
    //             cout << f << " Fahrenheit is equal to " << c << " Celcius";
    //             break;

    //         default:
    //             cout << " Invalid Choice Try Again ";
    //             break;
    //         }
    //         cout << "\nDo you Want to Continue Enter y/n ";
    //         cin >> choice1;
    //     }

    // USE OF FOR  LOOP WITH BREAK STATMENT
    // double f, c;
    // char choice1 = 'y';
    // char choice;

    // for (int i = 1; i <= 2;)
    // {

    //     cout << "\nEnter the conversion you want f/c  ";
    //     cin >> choice;
    //     switch (choice)
    //     {

    //     case 'f':
    //         cout << "\nEnter the value in Celcius ";
    //         cin >> c;
    //         f = 9 * c / 5 + 32;
    //         cout << c << " Celcuis is equal to " << f << " Fahrenheit";
    //         break;
    //     case 'c':
    //         cout << "\nEnter the value in Fahrenheit ";
    //         cin >> f;
    //         c = (f - 32) * 5 / 9;
    //         cout << f << " Fahrenheit is equal to " << c << " Celcius";
    //         break;
    //     case 'F':
    //         cout << "\nEnter the value in Celcius ";
    //         cin >> c;
    //         f = f = 9 * c / 5 + 32;
    //         cout << c << " Celcuis is equal to " << f << " Fahrenheit";
    //         break;
    //     case 'C':
    //         cout << "\nEnter the value in Fahrenheit ";
    //         cin >> f;
    //         c = (f - 32) * 5 / 9;
    //         cout << f << " Fahrenheit is equal to " << c << " Celcius";
    //         break;

    //     default:
    //         cout << " Invalid Choice Try Again ";
    //         break;
    //     }
    //     cout << "\nDo you Want to Continue Enter y/n ";
    //     cin >> choice1;

    //     if (choice1 != 'y')
    //     {
    //         break;
    //     }
    // }
    // int PASS = 2129;
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << "*";
    //     cout << endl;
    //     break;
    //     continue;

    //     cout << "**";
    // // }

    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << " \nEnter the password to Access ";
    //     cin >> PASS;
    //     if (PASS != 2129)
    //     {
    //         cout << "\nINVALID PASSWORD TRY AGAIN three times to invalid pass to  permanently lock your phone";
    //         continue;cout << "\nYOUR PHONE IS PERMANTLY LOCKED";
    //     }

    //     else
    //         cout << "\nyou are In";
    //     break;
    // }

    return 0;
}