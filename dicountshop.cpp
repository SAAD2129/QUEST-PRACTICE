#include <iostream>

using namespace std;

int main()
{
    int laptop, mobile_phone, book, total, Final, d_l, d_b, d_m, total_d;

    cout << "Enter the Price of book ";
    cin >> book;
    cout << "\nEnter the Price of mobile_phone ";
    cin >> mobile_phone;
    cout << "\nEnter the Price of laptop ";
    cin >> laptop;
    total = laptop + book + mobile_phone;

    d_b = book * 10 / 100;

    d_m = mobile_phone * 20 / 100;

    d_l = laptop * 5 / 100;
    total_d = d_l + d_m + d_b;
    Final = total - total_d;
    if (total >= 20000)
    {
        if (total_d >= 3000)
        {
            cout << "The total price after discount is " << total - 3000;
        }
        else{
        
            cout<<"The total price after the discount is "<<Final;
        }
        
    }
    else
    {
        cout << "The total price is " << total;
    }
    return 0;
}