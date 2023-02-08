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
	    ll a,b,n;
	    cin>>a>>b>>n;
	    
	    ll count=0;
	    ll sum=0;
	    while(sum<=n)
	    {
	        if(a>b)
	        {
	            b+=a;
                sum=b;
                count++;
	        }
	        else
	        {
	            a+=b;
                sum=a;
                count++;
	        }
	        
	        //
	        if(sum>n)
	        break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
