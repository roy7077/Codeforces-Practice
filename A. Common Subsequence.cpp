#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    vector<int> v1(n),v2(m);
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v1[i];
	        map[v1[i]]++;
	    }
	    
	    int flag=0;
	    int ans=0;
	    for(int i=0;i<m;i++)
	    {
	        cin>>v2[i];
	        if(map.count(v2[i]))
	        {
	            flag=1;
	            ans=v2[i];
	        }
	    }
	    
	    if(flag)
	    {
	        cout<<"YES"<<endl;
	        cout<<"1 "<<ans<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t*n)
