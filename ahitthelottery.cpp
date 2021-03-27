#include<iostream>


using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[5]={100,20,10,5,1};
   int count=0;
   for(int i=0;i<5;i++)
   {
       while((n/arr[i])>0)
       {
           count=count+(n/arr[i]);
           n=n%arr[i];
       }
   }
   cout<<count;
   return 0;
}