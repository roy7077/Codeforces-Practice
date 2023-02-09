#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c;
	    cin>>a>>b>>c;
	    
	    ll mx=max({a,b,c});
	    bool tie = (((a == mx) + (b == mx) + (c == mx)) > 1);
        ll u = (a == mx) ? tie : (mx + 1 - a);
        ll v = (b == mx) ? tie : (mx + 1 - b);
        ll w = (c == mx) ? tie : (mx + 1 - c);
        
        cout<<u<<" "<<v<<" "<<w<<endl;
	}
	return 0;
}

// time _Complexity - o(t)