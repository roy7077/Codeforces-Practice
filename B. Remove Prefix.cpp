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
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    unordered_map<int,int> map;
	    int ans=-1;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(map.count(v[i])==0)
	        map[v[i]]++;
	        else
	        {
	            ans=i+1;
	            break;
	        }
	    }
	    
	    if(ans!=-1)
	    cout<<ans<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)