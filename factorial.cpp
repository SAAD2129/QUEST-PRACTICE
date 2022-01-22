#include <iostream>

using namespace std;

int factorial(int num){
        
    if (num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return (num * factorial (num-1));
    }
    
}

int main()
{   int num;
    // int rows;
    // cout << "Enter the number of rows ";
    // cin >> rows;
    // for (int i = 0; i <= rows; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << i ;
    //     }cout<<endl;
    // }
    while (num!=0)
    {
        /* code */
    
    
    cout<<"\nEnter the number you want the factorial of ";

    cin>>num;

    cout<<"The factorial of "<<num<<" is "<<factorial(num);
    }
    return 0;
}