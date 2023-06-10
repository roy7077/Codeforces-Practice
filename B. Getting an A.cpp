#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	
	ll sum=0;
	vector<ll> v(n);
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    sum+=v[i];
	}
	
	double floatnumb=(double(sum))/n;
	int integer=sum/n;
	
	if((floatnumb>=4 and floatnumb-integer>=0.5) or floatnumb==5)
	{
	    cout<<"0"<<endl;
	    return 0;
	}
	
	sort(v.begin(),v.end());
	int cnt=0;
	for(int i=0;i<n;i++)
	{
	    sum+=5-v[i];
	    cnt++;
	    floatnumb=(double(sum))/n;
    	integer=sum/n;
    	
    	if((floatnumb>=4 and floatnumb-integer>=0.5) or floatnumb==5)
    	{
    	    cout<<cnt<<endl;
    	    return 0;
    	}
	}
	return 0;
}

// time _Complexity - O(N)
// space _Complexity - O(N)