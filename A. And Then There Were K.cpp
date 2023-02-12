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
	    
	    ll ans=0;
	    for(int i=30;i>=0;i--)
	    {
	        if((1<<i)&n)
	        {
	            ans=(1<<i)-1;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

// time _Complexity - O(t*30)