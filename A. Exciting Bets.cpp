#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a>b) 
    swap(a,b);
    ll ans = b-a;
    if(ans == 0) 
    cout<<0<<" "<<0<<"\n";
    else
    {
        ll one = (ans - a%ans);
        ll two = a%ans;
        cout<<ans<<" "<<min(one,two)<<"\n";
    }
}  
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
// time _Complexity - O(t)