#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
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
	    unordered_map<ll,ll> map;
	    bool flag=1;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(map.count(v[i]))
	        {
	            flag=0;
	        }else
	        {
	            map[v[i]]++;
	        }
	    }
	    
	    if(!flag)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	       
	}
	return 0;
}

// time _Complexity - O( t * n)