#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll l,r;
	    cin>>l>>r;
	    
	    ll res = (r >= 2 * l) ? (r - 1) / 2 : (r - l);
	    cout<<res<<endl;
	}
	return 0;
}
 
// time _Complexity - O(t)