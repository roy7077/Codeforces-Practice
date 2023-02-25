#include <iostream>
#include <algorithm>
#include <vector>
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
	    
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    if(n==2)
	    {
	        cout<<v[0]*v[1]<<endl;
	        continue;
	    }
	    
	    ll maxi=0;
	    for(int i=1;i<n-1;i++)
	    {
	        maxi=max(max(v[i-1],v[i+1])*v[i],maxi);
	    }
	    
	    cout<<maxi<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)