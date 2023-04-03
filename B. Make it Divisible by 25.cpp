#include <iostream>
#include <vector>
using namespace std;
#define ll long long
 
// function to calculate the number of digits in a number
int count_digit(ll n)
{
    int cnt=0;
    while(n)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}

// main function
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    if(n%25==0)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    int size=count_digit(n);
	    vector<ll> v(size);
	    
	    int i=size-1;
	    while(n)
	    {
	        v[i]=n%10;
	        i--;
	        n/=10;
	    }
	    
	    int ind1=-1;
	    int ind2=-1;
	    for(int j=size-1;j>=0;j--)
	    {
	        if(ind1==-1 and v[j]==5)
	        ind1=j+1;
	        else if(ind1!=-1 and (v[j]==2 or v[j]==7))
	        {
	            ind2=j+1;
	            break;
	        }
	    }
	    int ans=1e9;
	    if(ind1!=-1 and ind2!=-1)
	    {
	        int a=size-ind1;
	        int b=ind1-1-ind2;
	        ans=a+b;
	    }
	    
	    ind1=-1;
	    ind2=-1;
	    for(int j=size-1;j>=0;j--)
	    {
	        if(ind1==-1 and v[j]==0)
	        ind1=j+1;
	        else if(ind1!=-1 and (v[j]==5 or v[j]==0))
	        {
	            ind2=j+1;
	            break;
	        }
	    }
	    
	    if(ind1!=-1 and ind2!=-1)
	    {
	        int a=size-ind1;
	        int b=ind1-1-ind2;
	        ans=min(ans,(a+b));

	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t*18)