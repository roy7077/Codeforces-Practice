#include <iostream>
#include <vector>
#include <set>
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
	    set<ll> s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        s.insert(v[i]);
	    }
	    
	    cout<<s.size()<<endl;
	}
	return 0;
}

// time _Complexity - O( t * n )
