#include<iostream>
using namespace std;

int main() 
{ 
	int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a=(n*n-n+2)/2;
        // cout<<a;
        cout<<(n*(2*a+(n-1))/2)<<endl;
        t--;
    }
    return 0;
} 
