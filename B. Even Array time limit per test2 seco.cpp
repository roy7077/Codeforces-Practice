#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll> v(n);
	    ll count1=0;
	    ll count2=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(i%2==0 and v[i]%2==1)
	        count1++;
	        else if(i%2==1 and v[i]%2==0)
	        count2++;
	    }
	    
	    if(count1==count2)
	    cout<<count1<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
