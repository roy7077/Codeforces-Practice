#include <iostream>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x,y,n;
	    cin>>x>>y>>n;
	    
	    ll temp=n-(n%x);
	    
	    while(1)
	    {
	        if(temp+y<=n)
	        {
	            //flag=1;
	            break;
	        }
	        
	        temp-=x;
	    }
	    
	    cout<<temp+y<<endl;
	}
	return 0;
}
