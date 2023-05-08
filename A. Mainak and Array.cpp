#include <iostream>
#include <vector>
#include <algorithm>
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
	    
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        ans=max(v[i]-v[0],ans);
	        ans=max(v[n-1]-v[i],ans);
	        ans=max(v[i]-v[(i+1)%n],ans);
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}

//time _Complexity - O(t*n)
