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
	    
	    ll even=0;
	    ll odd=0;
	    for(ll i=0;i<n;i++)
	    {
	        ll input;
	        cin>>input;
	        if(input&1)
	        odd++;
	        else
	        even++;
	    }
	    
	    if(odd==n or even==n)
	    cout<<"0"<<endl;
	    else if(odd<even)
	    cout<<odd<<endl;
	    else
	    cout<<even<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
