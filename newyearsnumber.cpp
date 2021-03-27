#include<iostream>
using namespace std;


int main() 
{ 
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    int n,flag=0;
    cin>>n;
    for(int i=1;i<=n/2020;i++)
    {
        if((n-(2020*i))%2021==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
    return 0; 
    }
} 
