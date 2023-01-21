#include <algorithm>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;
#define ll long long

int solve(ll n,vector<ll>& dp)
{
    
    //base cases
    if(n==1)
    return 0;
    
    if(n<1)
    return 1e9;
    
    //memo check
    if(n<=1000000 and dp[n]!=-1)
    return dp[n];
    
    //recursive calls
    int a,b;
    a=b=1e9;
    
    if(n%6==0)
    a=1+solve(n/6,dp);
    else
    b=1+solve(2*n,dp);
    
    if(n<=1000000)
    dp[n]=min(a,b);
    
    return min(a,b);
}
int main() 
{
	int t;
	cin>>t;
	
	vector<ll> dp(1000005,-1);
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    int ans=solve(n,dp);
	    if(ans>=1e9)
	    cout<<"-1"<<endl;
	    else
	    cout<<ans<<endl;
	}
	return 0;
}
