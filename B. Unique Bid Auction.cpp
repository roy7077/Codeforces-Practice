#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    unordered_map<int,int> map;
	    vector<int> v(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        map[v[i]]++;
	    }
	    
	    int ans=INT_MAX;
	    for(auto it:map)
	    {
	        if(it.second==1 and it.first<ans)
	        ans=it.first;
	    }
	    
	    if(ans>=INT_MAX)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]==ans)
	        {
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	    
	}
	return 0;
}

// time _Complexity - O(t*n)