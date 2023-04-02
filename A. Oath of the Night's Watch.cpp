#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
	cin>>v[i];
	
    sort(v.begin(),v.end());
    int s=-1;
    int e=-1;
    
    for(int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
            s=i;
            break;
        }
    }
    
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]!=v[i+1])
        {
            e=i;
            break;
        }
    }
    
    if(s==e and s!=-1)
    cout<<"1"<<endl;
    else if(s==-1 or e==-1)
    cout<<"0"<<endl;
    else
    cout<<(e-s+1)<<endl;
    
	return 0;
}

// time _Complexity - O(n)