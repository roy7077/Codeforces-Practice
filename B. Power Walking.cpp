#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
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
	    
	    vector<ll> v(n);
	    map<ll,ll> mp;
	    //int maxi=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        mp[v[i]]++;
	        
	       // if(map[v[i]]>maxi)
	       // maxi=map[v[i]];
	    }
	    
	    int cnt=1;
	    int maxi=mp.size();
	    for(int i=1;i<=n;i++)
	    {
	        if(maxi>=i)
	        cout<<maxi<<" ";
	        else
	        {
	            cout<<maxi+cnt<<" ";
	            cnt++;
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}
