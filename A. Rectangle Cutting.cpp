// Time complexity - O(t)
// Space complexity- O(1)
#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
	    
	    if(a&1 and b&1)
	    cout<<"NO"<<endl;
	    else if(a==b)
	    cout<<"YES"<<endl;
	    else if(a%2==0 and b%2==0)
	    {
	        if((a/2)!=b or (b/2)!=a)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        int n1,n2;
	        if(a&1)
	        {
	            n1=a;
	            n2=b;
	        }
	        else
	        {
	            n1=b;
	            n2=a;
	        }
	        
	        if((n2/2)==n1)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
