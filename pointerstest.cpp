#include<iostream>

using namespace std;
int increment(int *k)
{
    *k=*k+1;
    return *k;
}
int main()
{
        
        int a;
        cout<<"Enter Your number : ";
        cin>>a;
        increment(&a);
        cout<<a;
        return 0;
}
