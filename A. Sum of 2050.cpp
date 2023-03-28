#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    if(n%2050!=0)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    n/=2050;
	    int ans=0;
	    while(n)
	    {
	        ans+=n%10;
	        n/=10;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

// time _Complexity - O(t+18)
