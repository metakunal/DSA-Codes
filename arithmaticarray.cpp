#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[7]={10,7,4,6,8,10,11};

    int diff;
    int counter=1;
    int high=0;
    diff=a[1]-a[0];
    // for(int i=0;i<7;i++)
    // {
        
        for(int j=1;j<7;j++)
        {
            if(diff==a[j+1]-a[j])
            {
                counter++;
            }
            else
            {
                diff=a[j+1]-a[j];
                cout<<"diff : "<<a[j+1]<<"-"<<a[j]<<"="<<diff<<endl;
            }
            if(counter>high)
            {
                
                high=counter;
            }
            
        }
        
    // }
    cout<<"Largest arithmetic array "<<high;
    return 0;
}