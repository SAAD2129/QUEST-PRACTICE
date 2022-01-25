#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double sum,sum1,sum2;
    double sum3;
    for (int i = 1; i <= 100; i++)
    {
    sum=sum+sqrt(i+1/i);
    sum1=sum1+sqrt(i/i+1);
    // sum2=sum2+pow(i/i+1,2);
    // sum3=sum3+pow(i+1/i,2);
    
    }
    cout << sum<<endl;
    cout << sum1<<endl;
    // cout << sum2<<endl;
    // cout << sum3;
    return 0;
}