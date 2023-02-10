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
	    int n,d;
	    cin>>n>>d;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end(),greater<int>());
	    bool flag=1;
	    for(int i=0;i<n-2;i++)
	    {
	        if(i==n-1 or i==n-2)
	        {
	            if(v[i]>d)
	            {
	                flag=0;
	                break;
	            }
	        }
	        else if(v[i]>d)
	        {
	            if(v[n-1]+v[n-2]>d)
	            {
	                flag=0;
	                break;
	            }
	        }
	    }
	    
	    if(!flag)
	    {
	        cout<<"No"<<endl;
	        continue;
	    }
	    else
	    cout<<"Yes"<<endl;
	    
	    
	    
	}
	return 0;
}

// time _Complexity - O(t*(n+nlong))