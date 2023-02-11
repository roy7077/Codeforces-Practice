#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll n,x;
	cin>>n>>x;
	ll count=0;
	
	while(n--)
	{
	    char ch;
	    ll di;
	    cin>>ch>>di;
	    
	    if(ch=='+')
	    x+=di;
	    else
	    {
	        if(di<=x)
	        x-=di;
	        else
	        count++;
	    }
	}
	
	cout<<x<<" "<<count<<endl;
	return 0;
}

// time _Complexity - o(n)
