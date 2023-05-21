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
	    {
	        cin>>v[i];
	        if(v[i]==1)
	        v[i]++;
	    }
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(v[i+1]%v[i]==0)
	        v[i+1]++;
	        
	    }
	   for(auto it:v)
       cout<<it<<" ";
       cout<<endl;
	    
	    
	}
	return 0;
}
