#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    ll n;
    cin>>n;
    
    ll ans=(n/7)*2;
    ll ans2=ans;
    if(n%7>=2)
    ans+=2;
    else if(n%7==1)
    ans++;
    
    if(n%7>5)
    ans2++;
    
    cout<<ans2<<" "<<ans<<endl;
    return 0;
}

// time _Complexity - O(1)