#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    
	    ll temp=n;
	    //if n is divisible by k
	    if(n%k==0)
	    {
	        cout<<n<<endl;
	        continue;
	    }
	    
	    int ans1=n/k;
	    n%=k;
	    
	    if(n>(k/2))
	    n=k/2;
	    
	    cout<<(ans1*k)+n<<endl;
	}
	return 0;
}

// time _Complexity - O(t)