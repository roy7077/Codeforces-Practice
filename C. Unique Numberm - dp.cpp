#include <unordered_map>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
 
unordered_map<int,int> map;
bool solve(int num,vector<int>& v)
{
    //base case
    if(num==0)
    {
        for(auto it:map)
	    {
	        if(it.second)
	        v.push_back(it.first);
	    }
	    sort(v.begin(),v.end());
        return true;
    }
    
    
    if(num<0)
    return false;
    
    //recursive call
    bool a=false;
    for(int i=9;i>=1;i--)
    {
        if(map[i]==0)
        {
            map[i]=1;
            bool ans=solve(num-i,v);
            map[i]=0;
            if(ans)
            return true;
        }
    }
    
    return false;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    vector<int> v;
	    
	    bool ans=solve(x,v);
	    if(!ans)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    for(int i=0;i<v.size();i++)
	    cout<<v[i];
	    
	    cout<<endl;
	}
	return 0;
}