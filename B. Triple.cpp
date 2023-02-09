#include <iostream>
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
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        
	        map[a]++;
	    }
	    
	    bool flag=0;
	    for(auto it:map)
	    {
	        if(it.second>=3)
	        {
	            flag=1;
	            cout<<it.first<<endl;
	            break;
	        }
	    }
	    
	    if(!flag)
	    cout<<"-1"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
