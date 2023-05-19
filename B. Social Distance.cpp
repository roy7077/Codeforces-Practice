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
	    ll n,m;
	    cin>>n>>m;
	    
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    
	    sort(v.begin(),v.end());
	    ll i=0;
	    ll cnt=0;
	    ll pre=0;
	    while(i<n)
	    {
	        ll req=v[i]-pre;
	        if(req>0)
	        {
	            if(i==0)
	            {
	                cnt+=req;
	                cnt++;
	            }
	            else
	            cnt+=req;
	        }
	        
	        
	        if(i==n-1)
	        {
	            ll need=v[i]-v[0];
	            if(need>0)
	            cnt+=need;
	        }
	        else
	        {
	            cnt+=v[i];
    	        pre=v[i];
    	        cnt++;
	        }
	        
	        i++;
	    }
	    
	    if(cnt<=m)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
