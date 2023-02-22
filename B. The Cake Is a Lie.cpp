#include <iostream>
#include <vector>
using namespace std;

bool helper(int i,int j,int n,int m,int k,int sum,vector<vector<int>>& memo)
{
    //base case
    if(i==n and j==m)
    {
        if(sum==k)
        return true;
        else
        return false;
    }
    
    if(i<=0 or i>n or j<=0 or j>m)
    return false;
    
    //memo check
    if(memo[i][j]!=-1)
    return memo[i][j];
    
    //recursive call
    bool a=0;
    bool b=0;
    
    a=helper(i,j+1,n,m,k,sum+i,memo);
    if(a)
    {
        memo[i][j]=1;
        return true;
    }
    
    b=helper(i+1,j,n,m,k,sum+j,memo);
    if(b)
    {
        memo[i][j]=1;
        return true;
    }
    
    memo[i][j]=0;
    return false;
    
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,m,k;
	    cin>>n>>m>>k;
	    
	    vector<vector<int>> memo(n+1,vector<int>(m+1,-1));
	    if(helper(1,1,n,m,k,0,memo))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n*m)
