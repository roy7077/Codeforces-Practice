#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    if(n==1)
	    cout<<"YES"<<endl;
	    else if(n==2)
	    {
	        int a=s[0]-'0';
	        int b=s[1]-'0';
	        if((a+b)==1)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t)
