#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll> v(n);
	    ll mini=INT_MAX;
	    ll count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        
	        if(v[i]<mini)
	        mini=v[i];
	    }
	    
	    for(auto it:v)
	    {
	        if(it>mini)
	        count+=it-mini;
	    }
	    
	    cout<<count<<endl;
	   
	}
	return 0;
}

// time _Complexity - O( t * n )

/*
dry run
before sorting - 1 2 3 5 1 2 7 9 13 5
after sorting  - 1 1 2 2 3 5 5 7 9 13 

total number of candies need to eat to make all boxes equal
12 + 8 + 6 + 4 + 4 + 2 + 1 + 1 = 38

*/