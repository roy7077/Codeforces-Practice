#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solve(int x,vector<int>& memo)
{
    if(x==0)
    return 0;
    
    if(x<0)
    return 1e9;
    
    if(memo[x]!=-1)
    return memo[x];
    
    int mini=1e9;
    for(int i=1;i<=5;i++)
    {
        int a=1+solve(x-i,memo);
        mini=min(a,mini);
    }
    
    return memo[x]=mini;
}

int main()
{
    int x;
    cin>>x;
    
    vector<int> memo(x+1,-1);
    cout<<solve(x,memo)<<endl;

    return 0;
}