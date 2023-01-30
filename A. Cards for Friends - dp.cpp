#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

//solve function
ll solve(ll w,ll h,vector<vector<ll>>& memo)
{
    if(w&1 and h&1)
    return 1;
    
    //memo check
    if(w<=10004 and h<=10004 and memo[w][h]!=-1)
    return memo[w][h];
    
    ll a,b;
    a=b=0;
    if(w%2==0)
    {
        //cout<<"1st call -> w -> "<<w<<" h -> "<<h<<endl;
        a=solve(w/2,h,memo);
    }
    
    if(h%2==0)
    {
        //cout<<"1st call -> w -> "<<w<<" h -> "<<h<<endl;
        b=solve(w,h/2,memo);
    }
    
    //cout<<max(a,b)*2<<endl;
    if(w<=10004 and h<=10004)
    return memo[w][h]=max(a,b)*2;
    else
    return max(a,b)*2;
}


int main() 
{
	ll t;
	cin>>t;
	vector<vector<ll>> memo(10005,vector<ll>(10005,-1));
	while(t--)
	{
	    ll w,h,n;
	    cin>>w>>h>>n;
	    
	    ll ans=solve(w,h,memo);
	    //cout<<ans<<endl;
	    if(ans>=n)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
