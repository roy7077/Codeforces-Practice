#include <iostream>
#include <vector>
#include <algorithm>
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

	    ll carry=0;
	    bool flag=1;
	    for(ll i=0;i<n;i++)
	    {
	        ll input;
	        cin>>input;
	        
	        if(input>=i)
	        carry+=input-i;
	        else
	        {
	            if(input+carry<i)
	            {
	                flag=0;
	                carry=0;
	            }
	            else
	            carry-=(i-input);
	        }
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)