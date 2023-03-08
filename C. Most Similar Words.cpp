#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,size;
	    cin>>n>>size;
	    
	    vector<string> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    int mini=1e9;
	    for(int i=0;i<n;i++)
	    {
	        string s1=v[i];
	        for(int j=i+1;j<n;j++)
	        {
	            string s2=v[j];
	            int num=0;
	            for(int k=0;k<size;k++)
	            {
	                num+=abs(s1[k]-s2[k]);
	            }
	            mini=min(num,mini);
	        }
	    }
	    cout<<mini<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t*n^2*size)