#include <iostream>
#include <vector>
using namespace std;
#define ll long long

//prime seive
vector<ll> arr(10000005,1);
void prime_sieve()
{
    int n=1000000;
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<n+1;j+=i)
            {
                arr[j]=0;
            }
        }
        
    }
}
int main() {

    prime_sieve();
    ll n;
    cin>>n;
    
    for(ll i=2;i<=n;i++)
    {
        //if both number is composite (not prime) thats mean these are valid number
        if(arr[i]==0 and arr[n-i]==0)
        {
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
	
	return 0;
}
