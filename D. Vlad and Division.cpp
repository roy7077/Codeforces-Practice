#include <iostream>
#include <vector>
#include <climits>
#include <set>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<ll> v(n);
	    for(auto& i:v)
	    cin>>i;
	    
	    multiset<ll> ms;
	    int ans=0;
	    for(auto& it:v)
	    {
	        if(ms.find(it^INT_MAX)!=ms.end())
	        ans++,ms.erase(ms.find(it^INT_MAX));
	        else
	        ms.insert(it);
	    }
	    
	    cout<<ans+ms.size()<<endl;
	}
	return 0;
}
