#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
 
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll r,b,d;
	    cin>>r>>b>>d;
 
	    if(d==0)
	    {
	        if(r!=b)
	        {
	            cout<<"NO"<<endl;
	            continue;
	        }
	    }
	    
	    int a=ceil(((double)max(r,b))/(d+1));
	    if(a>min(r,b))
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
 
// time _Complexity - O(t)