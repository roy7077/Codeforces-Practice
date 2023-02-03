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
	    
	    if(n<=6)
	    cout<<"15"<<endl;
	    else if(n<=8)
	    cout<<"20"<<endl;
	    else if(n<=10)
	    cout<<"25"<<endl;
	    else
	    {
	        ll ans=15*(n/6);
	        if(n%6==0)
	        ans+=0;
	        else if(n%6<=2)
	        {
	            ans-=15;
	            ans+=20;
	        }
	        else if(n%6<=4)
	        {
	            ans-=15;
	            ans+=25;
	        }
	        else if(n%6==5)
	        ans+=15;
	        
	        cout<<ans<<endl;
	    }
	}
	return 0;
}

// time _Complexity - O(t)
