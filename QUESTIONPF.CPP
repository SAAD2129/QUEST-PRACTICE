#include<iostream>
#include<cmath>

using namespace std;

 int main(){
        double sum1,sum2,sum3,sum4;
        
        for (int i = 1; i <= 100; i++)
        {
            sum1=sum1+sqrt(i/i+1);
            sum2=sum2+sqrt(i+1/i);
            sum3=sum3+pow(i/i+1,2);
            sum4=sum4+pow(i+1/i,2);
        }
        cout<<sum1<<endl;
        cout<<sum2<<endl;
        cout<<sum3<<endl;
        cout<<sum4<<endl;
return 0;
}