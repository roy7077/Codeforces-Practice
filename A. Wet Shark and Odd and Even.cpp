#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	
	ll temp=n;
	ll odd=0;
	ll mini=1e9;
	ll sum=0;
	//vector<ll> v(n);
	while(temp--)
	{
	    ll input;
	    cin>>input;
	    if(input&1)
	    odd++;
	    
	    if(input&1 and input<mini)
	    mini=input;
	    
	    sum+=input;
	}
	`
	if(odd&1)
	sum-=mini;
	
	cout<<sum<<endl;
	return 0;
}

// time _Complexity - O(N)