#include <iostream>
#include <cmath>
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
	    
	    ll ans=ceil(((double)(n*m))/2);
	    cout<<ans<<endl;
	    
	   // if((n%2==0 and m%2==0) or (n&1 and m&1))
	   // cout<<ceil(double(n*m)/2)<<endl;
	   // else
	    
	}
	return 0;
}

//time complexity - O(t)