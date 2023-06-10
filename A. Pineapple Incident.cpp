#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t,s,x;
	cin>>t>>s>>x;
	
	if(x==t)
	{
	    cout<<"YES"<<endl;
	    return 0;
	}
	
	ll i=1;
	while(1)
	{
	    ll a=t+(i*s);
	    ll b=t+(i*s)+1;
	    
	    if(a==x or b==x)
	    {
	        cout<<"YES"<<endl;
	        return 0;
	    }
	    
	    if(b>x)
	    {
	        cout<<"NO"<<endl;
	        return 0;
	    }
	    i++;
	}
	return 0;
}
