#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=ceil((double)n/2);
        cout<<ans<<endl;
    }
	return 0;
}
