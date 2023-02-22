#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	ll neg=0;
	ll zero=0;
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    if(v[i]<0)
	    neg++;
	    else if(v[i]==0)
	    zero++;
	}
	
	if(neg%2==0 or (neg%2==1 and zero>=1))
	{
	    ll count=0;
	    for(auto it:v)
	    {
	        if(it<0)
	        count+=abs(-1-it);
	        else
	        count+=abs(1-it);
	    }
	    
	    cout<<count<<endl;
	}
	else
	{
	    ll count=0;
	    bool flag=1;
	    for(auto it:v)
	    {
	        if(it<=0)
	        {
	            if(flag)
	            {
	                count+=abs(1-it);
	                flag=0;
	            }
	            else
	            count+=abs(-1-it);
	        }
	        else
	        count+=abs(1-it);
	    }
	    cout<<count<<endl;
	}
	return 0;
}

// time _Complexity - O(n)