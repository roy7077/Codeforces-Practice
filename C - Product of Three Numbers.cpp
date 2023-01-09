//A. Even But Not Even - (codeforces)
#include <iostream>
#include <cstring>
using namespace std;
#define ll long long

void solve(ll n)
{
        ll a,b,c;
        
        ll k;
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                a=i;
                k=n/i;
                for(ll j=a+1;j*j<k;j++)
                {
                    if(k%j==0)
                    {
                        b=j;
                        cout<<"YES"<<endl;
                        cout<<a<<" "<<b<<" "<<k/j<<endl;
                        return ;
                    }
                }
            }
        }
        
        cout<<"NO"<<endl;
        
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        solve(n);
    }

    return 0;
}