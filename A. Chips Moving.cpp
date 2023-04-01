#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long

int main() 
{
    ll n;
    cin>>n;
    
    vector<ll> v(n);
    ll even=0;
    ll odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]&1)
        odd++;
        else
        even++;
    }
    
    cout<<min(even,odd)<<endl;
	return 0;
}

// time _Complexity - O(n)