#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    ll ans=0;
	    for(int i=0;i<n-1;i++)
	    {
	        ll input;
	        cin>>input;
	        ans+=input;
	    }
	    
	    cout<<(-ans)<<endl;
	}
	return 0;
}
