#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	
	if(n==3)
	{
	    cout<<"1"<<endl;
	    cout<<"3"<<endl;
	    return 0;
	}
	
	//if n is odd
	if(n&1)
	{
	    int ans=(n-3)/2 + 1;
	    cout<<ans<<endl;
	    for(int i=0;i<(n-3)/2;i++)
	    cout<<"2"<<" ";
	    cout<<"3"<<endl;
	}
	else // if n is even
	{
	    int ans=n/2;
	    cout<<ans<<endl;
	    for(int i=0;i<ans;i++)
	    cout<<"2"<<" ";
	    cout<<endl;
	}
	return 0;
}

// time _Complexity - O(n/2)
