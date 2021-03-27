#include<iostream>

using namespace std;
int main()
{ 
    int n,num=0;
    cin>>n;
    int h[n],a[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
		{
			if (h[i] == a[j])
				num++;
		}
        
    }
    cout<<num<<endl;
    return 0;
}