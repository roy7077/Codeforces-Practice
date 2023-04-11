#include <iostream>
using namespace std;
#define ll long long

void asquare()
{
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n-3<<" 2 1\n";
    }else{
        n--;
        n/=2;
        if(n%2==0)
        {
            cout<<n+1<<" "<<n-1<<" 1\n";
        }
        else
        {
            cout<<n+2<<" "<<n-2<<" 1\n";
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    // asquare();
    return 0;
}