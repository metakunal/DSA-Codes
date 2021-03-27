#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the length n : ";
    cin>>n;
    cin.ignore();
    char a[n+1];
    cout<<"Enter the sentence";
    cin.getline(a,n);
    cin.ignore();
    // cout<<a;
    int maxlen=-1455424;
    int counter=0;
    int maxst=0,st=0;
    int i=0;
    while(true)
    {
        if(a[i]==' '||a[i]=='\0')
        {
            if(counter>maxlen)
            {
                maxlen=counter;
                maxst=i;
            }
            counter=0;
        }
        else
        {
            counter++;
        }
        if(a[i]=='\0')
        break;
        i++;
    }
    for(int j=maxst-maxlen;j<=maxst;j++)
    {
        cout<<a[j];
    }
    cout<<maxlen;
    return 0;
}
