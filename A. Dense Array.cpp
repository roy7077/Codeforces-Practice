#include <iostream>
#include <algorithm>
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
	    
	    int count=0;
	    for(int i=0;i<n-1;i++)
	    {
	        int mini=min(v[i],v[i+1]);
	        int maxi=max(v[i],v[i+1]);
	        
	        int val=mini;
	        while(val*2<maxi)
	        {
	            val*=2;
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
