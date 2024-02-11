#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void help(vector<int>& a,int i,int n,unordered_map<int,int>& mp,unordered_map<int,int>& ans,int& maxi)
{
    //base case
    if(i>=n)
    {
        for(auto it:ans)
        maxi=max(it.second,maxi);
        
        return ;
    }
    
    //recursive calls
    //and small calculation
    for(auto& it:mp)
    {
        if(it.second>=1)
        {
            it.second--;
            ans[it.first+a[i]]++;
            help(a,i+1,n,mp,ans,maxi);
            it.second++;
            ans[it.first+a[i]]--;
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end());
	    unordered_map<int,int> mp;
	    for(int i=1;i<=n;i++)
	    mp[i]=1;
	    
	    int maxi=0;
	    unordered_map<int,int> ans;
	    help(v,0,n,mp,ans,maxi);
	    cout<<maxi<<endl;
	}
	return 0;
}
