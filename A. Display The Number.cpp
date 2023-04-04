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
	    
	    if(n==3)
	    {
	        cout<<"7"<<endl;
	        continue;
	    }
	    ll ans=n/2;
	    n=n%2;
	    
	    int last=0;
	    if(n==1)
	    last=7;
	    
	    while(ans)
	    {
	        if(last!=0)
	        {
	            cout<<"7";
	            last=0;
	        }
	        else
	        cout<<"1";
	        ans--;
	    }
	  
	    cout<<endl;
	}
	return 0;
}

// time complexity - O(t*n/2)