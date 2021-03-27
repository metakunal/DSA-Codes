#include<iostream>
#include<math.h>
using namespace std;

    // int fact(int p)
    // {
    //     int f;
        
    //     return f;
    // }
 int factorial(int f)
 {
    
    int fact=1;
    for(int i=1;i<=f;i++)
    {
        fact=fact*i;
    }
    

     return fact;
 }
 int bc(int n,int m)
 {
    
     return(factorial(n)/(factorial(n-m)*factorial(m)));
 }
 int main()
 {
     int r;
     cout<<"Enter the number of rows :";
     cin>>r;
     for(int i=0;i<r;i++)
     {
         for(int j=0;j<=i;j++)
         {
             cout<<bc(i,j)<<" ";
         }
         cout<<endl;
     }

 }