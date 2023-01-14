
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
	
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	ll maxi=-1e9;
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    if(v[i]>maxi)
	    maxi=v[i];
	}
	
	//if there is only one citizen then return 0
	if(n==1)
	{
	    cout<<"0"<<endl;
	    return 0;
	}
	
	ll ans=0;
	for(int i=0;i<n;i++)
	ans+=maxi-v[i];
	
	cout<<ans<<endl;
	return 0;
}
