#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    int mini=1e9;
	    int index=-1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]<mini)
	        {
	            mini=v[i];
	            index=i;
	        }
	    }
	    
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i==index)
	        continue;
	        
	        int req=ceil(double(v[i])/((2*mini)-1));
	        ans+=req-1;
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}

// time _Complexity -  O(t*N)
// space _Complexity - O(N)
