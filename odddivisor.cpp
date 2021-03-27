#include<iostream>
#include<math.h>
using namespace std;
int even(long long w)
{
    if(w%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long n;
        cin>>n;
        int flag=0;
        for(int j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                
                if(even(j)==1)
                {
                    flag=1;
                    
                    break;
                    
                }
                else
                {
                    flag=0;
                }
                
            }
        }
        if((flag==1)||(n%2==1))
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}