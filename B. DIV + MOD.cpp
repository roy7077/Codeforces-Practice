#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll l,r,a;
	    cin>>l>>r>>a;
	    
	    ll ans1=(r/a)+(r%a);
	    
	    ll rem=r%a;
	    ll ans2=0;
	    if(rem!=(a-1))
	    {
	       // cout<<"a->"<<a<<endl;
	       // cout<<"r->"<<r<<endl;
	       // cout<<"l->"<<l<<endl;
	       // cout<<"r-rem+1->"<<r-(rem+1)<<endl;
	       // cout<<"r-rem+1->"<<r-(rem+1)<<endl;
	       if(r-(rem+1)<l)
	       ans2=l/a+l%a;
	       else
	       ans2=(r-(rem+1))/a+((r-(rem+1)))%a;
	    }
	    
	   // cout<<"rem->"<<rem<<endl;
	   // cout<<"ans1->"<<ans1<<endl;
	   // cout<<"ans2->"<<ans2<<endl;
	    cout<<max(ans1,ans2)<<endl;
	}
	return 0;
}

// time _Complexity - O(t)
