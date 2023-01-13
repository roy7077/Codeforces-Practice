#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() {
	
	//number of test cases
	ll t;
	cin>>t;
	while(t--)
	{
	    //taking inputs
	    ll a,b;
	    cin>>a>>b;
	    
	    ll req=abs(a-b);
	    ll ans=ceil(double(req)/10);
	    cout<<ans<<endl;
	}
	return 0;
}
