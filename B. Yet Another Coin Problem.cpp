// Time complexity - O(t*5)
// Space complexity- O(1)
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
	int t;
	cin>>t;
	
	ll k=16;
	vector<ll> pre(k,0);
	vector<int> arr={1,3,6,10,15};
	pre[0]=0;
	for(int i=1;i<k;i++)
	{
	    ll cal=1e9;
	    for(auto it:arr)
	    {
	        if(it>i)
	        continue;
	        
	        ll a=i/it;
	        ll b=pre[i%it];
	        cal=min(cal,a+b);
	    }
	    pre[i]=cal;
	}
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    if(n>15 and n%15==5)
	    {
	        cout<<(n/15)+1<<endl;
	        continue;
	    }
	    else if(n>15 and n%15==8)
	    {
	        cout<<(n/15)+2<<endl;
	        continue;
	    }
	   
	    ll cal=1e9;
	    for(auto it:arr)
	    {
	        ll a=n/it;
	        ll b=pre[n%it];
	        cal=min(cal,a+b);
	    }
	    cout<<cal<<endl;
	}
	return 0;
}
