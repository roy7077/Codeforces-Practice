#include <iostream>
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
	    int mini=1e9;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]<mini)
	        mini=v[i];
	    }
	    
	    int count=0;
	    for(auto it:v)
	    {
	        if(it>mini)
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)