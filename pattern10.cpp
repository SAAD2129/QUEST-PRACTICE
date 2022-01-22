#include<iostream>

using namespace std;

 int main(){
 int rows;
 cout<<"Enter the Number of Rows ";
 cin>>rows;
 for (int j = 1; j <= rows; j++)
 {
     for (int i = 1; i <= j; i++)
     {
         if ((i+j)%2==0)
         {
             cout<<"0 ";
         }
         else
         cout<<"1 ";
     }
     cout<<endl;
 }
 
return 0;
}