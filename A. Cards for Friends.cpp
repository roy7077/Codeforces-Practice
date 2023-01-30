#include <iostream>
using namespace std;
#define ll long long
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll w,h,n;
	    cin>>w>>h>>n;
	    
	    ll ans=1;
	    if(n==1)
	    {
	        cout<<"YES"<<endl;
	        continue;
	    }
	    while(w%2==0)
	    {
	        ans*=2;
	        w/=2;
	    }
	    
	    while(h%2==0)
	    {
	        ans*=2;
	        h/=2;
	    }
	    
	    if(n<=ans)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
