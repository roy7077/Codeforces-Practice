#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<vector<vector<int>>> dp(100005,vector<vector<int>>(31,vector<int>(31,-1)));

bool solve(int x,int n,int m)
{
    if(x>0 and n==0 and m==0)
    return false;
    
    if(x<=0)
    return true;
    
    if(dp[x][n][m]!=-1)
    return dp[x][n][m];
    
    bool a,b;
    a=b=false;
    
    if(n>0)
    {
        int temp=((double)x/2)+10;
        a=solve(temp,n-1,m);
    }
    
    if(a)
    {
        dp[x][n][m]=1;
        return 1;
    }
    if(m>0)
    {
        int temp=x-10;
        a=solve(temp,n,m-1);
    }
    
    int ans= (a or b);
    dp[x][n][m]=ans;
    return a or b;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n,m;
	    cin>>x>>n>>m;
	    if(solve(x,n,m))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n*m)
// space _Complexity -O(10^6 * 31 * 31)
