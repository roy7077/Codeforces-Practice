#include <iostream>
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
	    
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    bool flag=1;
	    ll cnt=0;
	    for(int i=n-2;i>=0;i--)
	    {
	        
            if(v[i+1]==0)
            {
                flag=0;
                break;
            }
            while(v[i]>=v[i+1])
            {
                cnt++;
                v[i]=v[i]/2;
            }
	        
	    }
	    
	    if(!flag)
	    cout<<"-1"<<endl;
	    else
	    cout<<cnt<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)