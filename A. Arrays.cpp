#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
    ll n1,n2;
    cin>>n1>>n2;
    
    ll k,m;
    cin>>k>>m;
    
    vector<ll> A(n1),B(n2);
    for(int i=0;i<n1;i++)
    cin>>A[i];
    
    for(int i=0;i<n2;i++)
    cin>>B[i];
    
    if(A[k-1]<B[n2-m])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
	return 0;
}

// time _Complexity - O(n)