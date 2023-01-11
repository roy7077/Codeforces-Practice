#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

ll solve(ll n,int ind,vector<int>& demo,vector<vector<ll>>& memo)
{
    //base case
    if(ind==0)
    {
        if(n==0)
        return 0;
        
        if(n%demo[0]==0)
        return n/demo[0];
        else
        return 1e9;
    }
    
    //memo check
    if(memo[n][ind]!=-1)
    return memo[n][ind];
    
    //recursive call
    //take and nottake
    
    ll a,b;
    a=b=1e9;
    
    a=0+solve(n,ind-1,demo,memo);
    
    if(n>=demo[ind])
    b=1+solve(n-demo[ind],ind,demo,memo);
    
    return memo[n][ind]=min(a,b);
}
int main() {
	
	ll n;
	cin>>n;
	
	vector<int> demo={1,5,10,20,100};
	
	/* if number is greater than 10^5 . for that we cannot memoize
	   so we have to minimize n . */
	ll sum=0;
	if(n>100000)
	{
	    sum+=n/100;
	    n=n%100;
	}
	vector<vector<ll>> memo(n+1,vector<ll>(5,-1));
	cout<<sum+solve(n,4,demo,memo)<<endl;
	
	return 0;
}
