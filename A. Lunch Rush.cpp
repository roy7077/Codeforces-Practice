#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	ll n,k;
	cin>>n>>k;
	
	ll ans=-1e9;
	while(n--)
	{
	    ll f,t;
	    cin>>f>>t;
	    
	    if(t>k)
	    {
	        ll temp=f-(t-k);
	        ans=max(temp,ans);
	    }
	    else
	    ans=max(ans,f);
	}
	
	cout<<ans<<endl;
	return 0;
}

// time _Complexity - O(n)