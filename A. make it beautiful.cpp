#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}
int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        map[v[i]]++;
	    }
	    
	    if(map.size()==1)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    vector<int> ans1,ans2;
	    for(auto it:map)
	    {
	        ans1.push_back(it.first);
	        for(int i=2;i<=it.second;i++)
	        ans2.push_back(it.first);
	    }
	    
	    sort(ans1.begin(),ans1.end(),compare);
	    cout<<"YES"<<endl;
	    for(auto it:ans1)
	    cout<<it<<" ";
	    
	    for(auto it:ans2)
	    cout<<it<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}
