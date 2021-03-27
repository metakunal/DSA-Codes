#include<iostream>

using namespace std;
int main()
{ 
    int n,m;
    cin>>n>>m;
    int step = 0;  
while(n <m){  
if(m%2 == 0){  
m/= 2;  
step++;  
}  
else {  
m++;  
step++;  
}  
}  
cout<<n - m + step;  
return 0;
} 
