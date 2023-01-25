#include <iostream>
#include <algorithm>
#include <vector>
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
	    
	    vector<ll> candy(n);
	    vector<ll> orange(n);
	    ll mini1=1e9;
	    ll mini2=1e9;
	    
	    //taking candy as input
	    for(int i=0;i<n;i++)
	    {
	        cin>>candy[i];
	        mini1=min(mini1,candy[i]);
	    }
	    
	    //taking orange as input
	    for(int i=0;i<n;i++)
	    {
	        cin>>orange[i];
	        mini2=min(mini2,orange[i]);
	    }
	    
	    ll count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(candy[i]>mini1 and orange[i]>mini2)
	        {
	            ll a=candy[i]-mini1;
	            ll b=orange[i]-mini2;
	            
	            if(a<=b)
	            {
	                candy[i]-=a;
	                orange[i]-=a;
	                count+=a;
	            }else
	            {
	                candy[i]-=b;
	                orange[i]-=b;
	                count+=b;
	            }
	        }
	        
	        if(candy[i]>mini1)
	        {
	            ll len=candy[i]-mini1;
	            candy[i]-=len;
	            count+=len;
	        }
	        
	        if(orange[i]>mini2)
	        {
	            ll len=orange[i]-mini2;
	            orange[i]-=len;
	            count+=len;
	        }
	    }
	    
	   // cout<<"mini1 -> "<<mini1<<endl;
	   // cout<<"mini2 -> "<<mini2<<endl;
	    cout<<count<<endl;
	}
	
	return 0;
}

// time _Complexity - O(t * n)