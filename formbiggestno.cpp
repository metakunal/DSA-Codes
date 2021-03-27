#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string ip;
    cout<<"Enter the numeric string : ";
    getline(cin,ip);
    cout<<ip<<endl;
    sort(ip.begin(),ip.end(),greater<int>());
    cout<<ip<<endl;
}