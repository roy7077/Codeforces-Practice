#include <iostream>
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
	    
	    ll ans=(n*(n+1))/2;
	    ll a=1;
	    while(a<=n)
	    {
	        ans-=2*a;
	        a*=2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

// time _Complexity - O(t*logn)