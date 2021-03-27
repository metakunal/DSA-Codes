#include<iostream>

using namespace std;
int main()
{ 
    int x;
    cin>>x;
    int a[5]={5,4,3,2,1};
    int count=0;
    for(int i=0;i<5;i++)
    {
        count=count+(x/a[i]);
        x=x%a[i];
    }
    cout<<count;
    return 0;
}