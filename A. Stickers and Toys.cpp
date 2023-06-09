#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,s,t;
	    cin>>n>>s>>t;
	    
	    ll mini=min(s,t);
	    if(n-mini==0)
	    cout<<"1"<<endl;
	    else
	    cout<<n-mini+1<<endl;
	}
	return 0;
}

// time _Complexity - O(t)
// space _Complexity - O(1)
