#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll x,n;
	    cin>>x>>n;
	    
	    ll z=0;
	    if(n%4==1)
	    z=-n;
	    else if(n%4==2)
	    z=1;
	    else if(n%4==3)
	    z=n+1;
	    
	    if(x&1)
	    cout<<x-z<<endl;
	    else
	    cout<<x+z<<endl;
	}
	return 0;
}

// time _Complexity - O(t)