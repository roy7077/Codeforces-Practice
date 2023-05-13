#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    
	    vector<ll> v((n*k)+1);
	    for(ll i=1;i<=(n*k);i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end());
	    
	   // cout<<"array -> ";
	   // for(auto it:v)
	   // cout<<it<<" ";
	   // cout<<endl;
	    vector<ll> s;
	    vector<ll> l;
	    int i=1;
	    int limit;
	    if(n&1)
	    limit=(n/2);
	    else
	    limit=(n/2)-1;
	    
	    for( ;i<=(limit*k);i++)
	    s.push_back(v[i]);
	    
	    //cout<<"i-> "<<i<<endl;
	    for( ;i<=(n*k);i++)
	    {
	       // cout<<"i2nd-> "<<i<<endl;
	       // cout<<"num-> " <<v[i]<<endl;
	        l.push_back(v[i]);
	    }
	    
	    
	    
	   // for(auto it:l)
	   // cout<<it<<" ";
	   // cout<<endl;
	    ll sum=0;
	    int limit2=(n/2);
	    for(int i=0;i<l.size();i+=(n/2)+1)
	    sum+=l[i];
	    
	    cout<<sum<<endl;
	}
	return 0;
}
