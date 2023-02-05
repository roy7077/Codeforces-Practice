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
	    int one=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]==1)
	        one++;
	    }
	    
	    if(one%2==0)
	    {
	        count+=one/2;
	    }else
	    {
	        count+=(one-1)/2;
	    }
	    
	    if(one&1)
	    count+=n-(one-1);
	    else
	    count+=n-one;
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}

//time _Complexity - O(t*n)
