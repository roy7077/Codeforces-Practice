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
	    ll n;
	    cin>>n;
	    
	    vector<ll> v(n);
	    ll sum=0;
	    ll pos=0;
	    ll neg=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i];
	        sum+=v[i];
	        
	        if(v[i]>=0)
	        pos+=v[i];
	        else
	        neg+=-v[i];
	    }
	    
	    sort(v.begin(),v.end(),greater<ll>());
	    
	    if(sum)
	    {
	        cout<<"YES"<<endl;
	        if(pos>neg)
	        {
	            for(auto it:v)
	            cout<<it<<" ";
	            cout<<endl;
	        }
	        else
	        {
	            for(int i=n-1;i>=0;i--)
	            cout<<v[i]<<" ";
	            cout<<endl;
	        }
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
