#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

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
	    
	    int mini=1e9;
	    int i=0;
	    int j=0;
	    sort(v.begin(),v.end());
	    for(i=0;i<n-1;i++)
	    {
	        if(v[i+1]-v[i]<mini)
	        {
	            i=i;
	            j=i+1;
	            mini=v[i+1]-v[i];
	        }
	    }
	    
	    cout<<mini<<endl;
	    
	}
	return 0;
}
//time complexity - O(t*nlogn)