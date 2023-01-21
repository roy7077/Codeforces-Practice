#include <iostream>
#include <vector>
using namespace std;
#define ll long long

bool ispossible(ll n,vector<ll>& dp)
{
    //base cases
    if(n==0)
    return true;
    
    if(n<0)
    return false;
    
    //memo check
    if(dp[n]!=-1)
    return dp[n];
    
    //recursive call
    //take and not-take 
    
    bool a=ispossible(n-2020,dp);
    bool b=ispossible(n-2021,dp);
    
    int ans;
    if(a or b)
    ans=1;
    else
    ans=0;
    
    dp[n]=ans;
    return a or b;
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
	    
	    if(ispossible(n,dp))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
