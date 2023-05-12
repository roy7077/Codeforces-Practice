#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    vector<ll> v(3);
	    for(int i=0;i<3;i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end(),greater<ll>());
	    bool flag;
	    if(v[0]-1>v[2]+v[1])
	    flag=0;
	    else
	    flag=1;
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
