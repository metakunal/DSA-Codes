#include<iostream>


using namespace std;
int main()
{

    int a,b,c,sum=0;
    cin>>a>>b;
    sum=a;
    while(1)
    {
        c=a/b;
    a=c+(a%b);
    sum+=c;
    if(a<b)
        break;
    }

    cout<<sum<<endl;
    return 0;
}