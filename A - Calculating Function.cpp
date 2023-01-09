#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define ll long long

int main()
{
    
    ll n;
    cin>>n;
    
    ll n1;
    ll n2;
    if(n&1)
    {
        n1=(n-1)/2;
        n2=n-n1;
    }
    else
    {
        n1=n/2;
        n2=n-n1;
    }
    ll odd_sum=n2*n2;
    ll even_sum=n1*(n1+1);
    
    cout<<even_sum-odd_sum<<endl;
    
    return 0;
}