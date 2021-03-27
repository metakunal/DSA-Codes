#include<iostream>

using namespace std;
int prime(int n)  
{  
  int i, m=0, flag=0;
  if(n==1)
  return 0;  
  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          return 0;
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      return 1;
  
}  
int main()
{
    
    int n;
    int counter=0;
    int prod=1;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        prod=prod*a[i];
        
    }
    
    for(int j=1;j<=prod;j++)
    {
        if((prod%j==0)&&(prime(j)==1))
        {
                counter++;
        }
    }
    if((counter>=2)&&(prime(counter)==1))
    {
        
        cout<<"Purva"<<endl;
        
        
    }
    else
    {
        cout<<"Snigdha"<<endl;
    }
    cout<<counter;
    return 0;
}
