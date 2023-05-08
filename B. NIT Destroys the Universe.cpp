#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	   // vector<int> v(n+1);
	    int pre=0;
	    int curr;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	       // cin>>v[i];
	       // if(v[i-1]==0 and v[i])
	       // cnt++;
	        if(i==0)
	        cin>>curr;
	        else
	        {
	            pre=curr;
	            cin>>curr;
	        }
	        if(pre==0 and curr)
	        cnt++;
	    }
	    
	   // if(n==1 and curr)
	   // cnt++;
	    cout<<min(cnt,2)<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
// space _Complexity - O(1)