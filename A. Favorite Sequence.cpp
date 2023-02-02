#include <iostream>
#include <vector>
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
	    vector<ll> v(n),ans;
	    for(ll i=0;i<n;i++)
	    cin>>v[i];
	    
	    for(ll i=0;i<=(n-1)/2;i++)
	    {
	        ans.push_back(v[i]);
	        ans.push_back(v[n-i-1]);
	    }
	    
	    if(n&1)
	    ans.pop_back();
	    
	    for(auto it:ans)
	    cout<<it<<" ";
	    cout<<endl;
	}
	return 0;
}

// time _Complexity - O( t * n)
