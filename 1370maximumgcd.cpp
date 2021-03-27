#include<iostream>

using namespace std;
int gcd(int a, int b)
{
    int mg=1;
    for(int i=1;i<=a;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            if(i>mg)
            {
                mg=i;
            }
        }

    }
    return mg;
}
int main()
{ 
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n;
        cin>>n;
        int m=1;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
            if(gcd(i,j)>m)
            {
                m=gcd(i,j);
            }
            }
            
        }
        cout<<m<<endl;
        
    }
    return 0;
}