#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
#define int long long 
using namespace std;
const int maxn=1e6+5;
int n,p[maxn];
vector<int>g[maxn],ans;

void dfs(int u,int fa)
{
	if(u==n)
	{
		for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
		cout<<endl;
		return;
	}
	for(int i=0;i<g[u].size();i++)
	{
		int v=g[u][i];
		if(v==fa)
		continue;
		ans.push_back(v); 
		dfs(v,u);
		ans.pop_back(); 
	}
	return;	
}


main()
{
	cin>>n;
	for(int i=2;i<=n;i++){
		cin>>p[i];
		g[p[i]].push_back(i);
		g[i].push_back(p[i]);
	}
	ans.push_back(1);
	dfs(1,0); 
}