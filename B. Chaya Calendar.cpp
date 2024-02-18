#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    ll y=0;
	    for(auto it:v)
	    {
	        if(y<it)
	        y=it;
	        else
	        {
	           // if(it==y)
	           // {
	           //     y=2*it;
	           //     continue;
	           // }
	            ll req=(y/it)+1;
	            y=req*it;
	        }
	    }
	    cout<<y<<endl;
	}
	return 0;
}
