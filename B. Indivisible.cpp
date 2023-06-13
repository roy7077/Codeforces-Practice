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
	    
	    if(n==1)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    if(n%2)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    for(int i=1;i<=n;i++)
	    {
	        if(i&1)
	        cout<<i+1<<" ";
	        else
	        cout<<i-1<<endl;
	    }
	}
	return 0;
}

// time _Complexity -  O(t*n)
// space _Complexity - O(1)
