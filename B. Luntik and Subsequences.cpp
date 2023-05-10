#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long
int mod=1e9;
// factorial function
ll f[1000001]={0};
void fact()
{
    f[0]=1;
    f[1]=1;
    for(int i=2;i<=62;i++)
    f[i]=((i%mod)*(f[i-1]%mod))%mod;
    
    return ;
}

// main function
int main() 
{
    //fact();
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<ll> v(n);

	    int z=0;
	    int o=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        
	        if(v[i]==0)
	        z++;
	        
	        if(v[i]==1)
	        o++;
	    }
	    
	    cout<<o*(1LL<<z)<<"\n";
	   // ll ans=0;
	   // for(int i=0;i<=z;i++)
	   // ans+=o*f[i];
	    
	    //ans=z>1?ans-1:ans;
	   // cout<<ans<<endl;
	}
	return 0;
}
