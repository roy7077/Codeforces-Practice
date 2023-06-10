#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
    ll n;
    cin>>n;
    
    vector<ll> v(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    
    sort(v.begin(),v.end(),greater<ll>());
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        ll input;
        cin>>input;
        
        cout<<sum-v[input-1]<<endl;
    }
	
	return 0;
}

// time _Complexity - O(nlogn)
// space _Complexity- O(n+m)
