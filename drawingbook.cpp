#include<iostream>

using namespace std;
int main()
{ 
    int n,p;
    cin>>n>>p;
    if(n%2==0)
    n=n+1;
    if(p%2==0)
    p=p+1;
    int i=((p-1)/2);
    int k=((n-p)/2);
    if(i>k)
    cout<<k;
    else
    {
        cout<<i;
    }
    
    return 0;
}