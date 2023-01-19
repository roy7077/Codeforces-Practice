#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
	
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	int maxi=0;
	int count=0;
	int pre=0;
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    if(v[i]>=pre)
	    {
	        count++;
	        pre=v[i];
	    }else
	    {
	        maxi=max(maxi,count);
	        pre=v[i];
	        count=1;
	    }
	}
	
	maxi=max(maxi,count);
	
	cout<<maxi<<endl;
	return 0;
}
