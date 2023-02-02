#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
    ll n;
    cin>>n;
    
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    cin>>v[i];
    
    ll pre_last=v[0];
    ll next_max=v[n-1];    
    ll pre=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        ll mini;
        if(i==n-1)
        mini=abs(pre-v[i]);
        else
        mini=min(abs(pre-v[i]),abs(v[i+1]-v[i]));
        ll maxi=max(abs(pre_last-v[i]),abs(next_max-v[i]));
        
        cout<<mini<<" "<<maxi<<endl;
        
        pre=v[i];
    }
    
	return 0;
}

// time _Complexity - O(n)
