#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int n;
    	cin>>n;
    	
    	string str;
    	cin>>str;
    	
    	if(n==2)
    	{
    	    cout<<str<<endl;
    	    return 0;
    	}
    	
    	string ans="";
    	for(int i=n-2;i>=0;i-=2)
    	ans+=str[i];
    	
    	if(n&1)
    	{
    	    for(int i=0;i<n;i+=2)
    	    ans+=str[i];
    	}
    	else
    	{
    	    for(int i=1;i<n;i+=2)
    	    ans+=str[i];
    	}
    	
    	cout<<ans<<endl;
	return 0;
}
