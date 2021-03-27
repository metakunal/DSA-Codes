#include<iostream>

using namespace std;
int main()
{ 
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    int n;
    cin>>n;
    int count=0;
    int r=n;
    while(r>0)
    {
        if(r%10!=0)
        {
        if(n%(r%10)==0)
        count++;
        }
        r=r/10;
    }
    cout<<count<<endl;
    }
    return 0;
}