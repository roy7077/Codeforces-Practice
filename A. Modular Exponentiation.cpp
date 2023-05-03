#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long

//power function
ll power_modular(ll base,ll n,ll m)
{
    ll ans=1;
    while(n)
    {
        if(n&1)
        {
            n--;
            ans=ans*base;
        }
        else
        {
            base*=base;
            n/=2;
        }
        
        if(ans>m)
        return -1;
    }
    
    return ans;
}

// main function
int main() 
{
	ll n,m;
	cin>>n>>m;
	
	
	ll ans=m%int(pow(2,n));
	cout<<ans<<endl;
// 	ll ans=power_modular(2,n,m);
// 	if(ans==-1)
// 	{
// 	    cout<<m<<endl;
// 	    return 0;
// 	}
// 	else
// 	{
// 	    if(m%ans==0)
// 	    cout<<"0"<<endl;
// 	    else
// 	    cout<<m%ans<<endl;
// 	}
	return 0;
}