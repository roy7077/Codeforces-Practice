#include <iostream>
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
	    
	    if(n%3==0)
	    cout<<n/3<<" "<<n/3<<endl;
	    else
	    {
	        ll ans1=n/3;
	        ll ans2=(n/3)+1;
	        if(ans1+(2*ans2)==n)
	        cout<<ans1<<" "<<ans2<<endl;
	        else
	        cout<<ans2<<" "<<ans1<<endl;
	    }
	    
	    
	}
	return 0;
}

// time _Complexity - O(t)
