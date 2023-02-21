#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c;
	    cin>>a>>b>>c;
	    
	    if((a+b==c) or (b+c==a) or (c+a==b))
	    cout<<"YES"<<endl;
	    else if((a==b and c%2==0) or (b==c and a%2==0) or (c==a and b%2==0))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t)