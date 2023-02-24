#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b,n;
	    cin>>a>>b>>n;
	    
	    ll d=0;
	    if(n&1)
	    d=(n/2 )+1;
	    else
	    d=n/2;
	    
	    cout<<(a*d)-((n-d)*b)<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t)