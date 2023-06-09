#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll m,n,i,j,k,ans;
    cin>>n>>k;

    if(k==0)ans=1;
    else if(k==n) ans=0;
    else
    {
        if(n/k  >= 2)ans=k;
        else ans=n-k;
    }
    cout<<ans<<endl;
    
    return 0;
}

// time _Complexity - O(1)
// space _Complexity - O(1)