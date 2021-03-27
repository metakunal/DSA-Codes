#include<iostream>
using namespace std;

int main() 
{ 
	int t;
    cin>>t;
    while(t)
    {
        int len;
        cin>>len;
        //Initializing variable.
	char str[len+1];
	int i,j;
	
	//Accepting input.
	cout<<"Enter a string : ";
	cin>>str;
	
    // len=strlen(str);
	
	//Accepting input.
	for(i=0; i<len; i++)
	{   
	    //Checking vowels.
		if(str[i]=='r'||str[i]=='e'||str[i]=='j'||str[i]=='c'||str[i]=='t'||str[i]=='d'||str[i]=='R'||str[i]=='E'||str[i]=='J'||str[i]=='C'||str[i]=='T'||str[i]=='D')
		{
		    
		    //Deleting vowels. 
			for(j=i; j<len; j++)
			{
			    //Storing string without vowels.
				str[j]=str[j+1];
			}
		len--;
		}
	}
	cout<<"After deleting the vowels, the string will be : "<<str;
        t--;
    }
    return 0;
} 
