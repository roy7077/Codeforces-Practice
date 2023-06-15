#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	
	ll maxi=0;
	for(int i=0;i<n;i++)
	{
	    ll input;
	    cin>>input;
	    
	    input+=maxi;
	    cout<<input<<" ";
	    
	    maxi=max(maxi,input);
	}
	return 0;
}

//time _Complexity - O(N)
//space _Complexity - O(1)
