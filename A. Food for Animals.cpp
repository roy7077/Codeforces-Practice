#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c,x,y;
	    cin>>a>>b>>c>>x>>y;
	    
	    ll l=x-a;
	    if(l<0)
	    l=0;
	    
	    ll m=y-b;
	    if(m<0)
	    m=0;
	    
	    if(l+m<=c)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}

// time _Complexity - O(t)
