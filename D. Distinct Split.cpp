#include <iostream>
#include <set>
#include <algorithm>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    set<char> st1,st2;
	    int prefix[n];
	    int suffix[n];
	    
	    //prefix calculation
	    prefix[0]=1;
	    st1.insert(s[0]);
	    for(int i=1;i<n;i++)
	    {
	        if(st1.count(s[i]))
	        {
	            prefix[i]=prefix[i-1];
	        }
	        else
	        {
	            prefix[i]=prefix[i-1]+1;
	            st1.insert(s[i]);
	        }
	    }
	    
	    //suffix calculation
	    suffix[n-1]=1;
	    st2.insert(s[n-1]);
	    for(int i=n-2;i>=0;i--)
	    {
	        if(st2.count(s[i]))
	        {
	            suffix[i]=suffix[i+1];
	        }
	        else
	        {
	            suffix[i]=suffix[i+1]+1;
	            st2.insert(s[i]);
	        }
	    }
	    
	    //max calculation
	    int maxi=0;
	    for(int i=0;i<n-1;i++)
	    {
	        maxi=max(prefix[i]+suffix[i+1],maxi);
	    }
	    
	    cout<<maxi<<endl;
	}
	return 0;
}

// time _Complexity - o(t*n)