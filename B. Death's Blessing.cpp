#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<pair<ll,ll>> v(n);
	    ll ans=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i].second;
	        ans+=v[i].second;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i].first;
	        ans+=v[i].first;
	    }
	    
	    sort(v.begin(),v.end(),greater<pair<ll,ll>>());
	    cout<<ans-v[0].first<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)