#include <iostream>

using namespace std;

int main()
{
    int num;
    int a = 1;
    
    char C='y';
    // cout<<"The value of "<<n;
    while (C=='y' || C=='Y')
    {double factorial = 1;
    cout << "\nEnter the Number you want the factorial of ";
    cin >> num;
    if (num < 0)
    {
        cout << "\nThe Number you Entered doesn't have any factorial so Try agian ";
    }
    else
    {
        while (a <= num)
        {
            factorial = factorial * a;
            a++;
        }

        cout << "\nThe facotrial of " << num << " is " << factorial;
        cout<<"\nDo you want to calculate any other factorial ";
        cin>>C;
        
     } }

    return 0;
}