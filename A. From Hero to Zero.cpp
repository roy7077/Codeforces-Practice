#include <iostream>
using namespace std;
#define ll long long

//solve function
ll solve(ll n,ll k)
{
    //base case
    if(n==0)
    return 0;
    
    //small calculation
    //recursive calls
    
    if(n%k==0)
    return 1+solve(n/k,k);
    else
    return n%k+solve(n-n%k,k);
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    
	    ll ans=solve(n,k);
	    cout<<ans<<endl;
	}
	return 0;
}
