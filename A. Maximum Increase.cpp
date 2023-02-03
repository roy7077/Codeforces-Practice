#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 

int main() 
{
	int n;
	cin>>n;
	
	vector<ll> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	int cnt=1;
	int maxi=1;
	for(int i=1;i<n;i++)
	{
	    if(v[i]>v[i-1])
	    cnt++;
	    else
	    {
	        maxi=max(maxi,cnt);
	        cnt=1;
	    }
	}
	
	if(cnt!=1)
	maxi=max(maxi,cnt);
	
	cout<<maxi<<endl;
	return 0;
}

// time _Complexity - O( t * n )


