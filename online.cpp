#include<iostream>

using namespace std;
int main()
{
    
    int n,m;
    int sum=0;
    
    cin>>n;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum%m==0)
    {
        cout<<sum/m;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}