#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    ll time1=b;
	    if(b>=a)
	    {
	        cout<<b<<endl;
	        continue;
	    }
	    
	    if(d>=c)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    ll req=ceil(double(a-b)/(c-d));
	   // cout<<req<<endl;
	    cout<<b+req*(c)<<endl;
	}
	return 0;
}

// time _Complexity - O(t)
