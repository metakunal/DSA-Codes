
#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ int t;
cin>>t;
for(int k=1;k<=t;k++)
{
    
    string str; 
    int ctr=0;
    getline(cin, str); 
    cin.ignore();
    cout<<str;
    int n=str.length();
    for (int i = 0; i < n; i++) { 

            if ((str[i] >= '0'
                && str[i] <= '9')|| str[i] == ' ') { 
                ctr=1; 
            } 
            else { 
                ctr=0;
                break;
            } 
            
    }
    if(str[3]=='-'&&str[7]=='-')
            ctr=1;
            else if(str[0]=='('&&str[4]==')'&&str[5]==' '&&str[9]=='-')
            ctr=1;
            else
            ctr=0;
    if(ctr==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  
}
      return 0; 
} 