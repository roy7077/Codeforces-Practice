#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
    	cin>>n;
    	
    	if(n&1)
    	{
    	    for(int i=0;i<n;i++)
    	    cout<<"1 ";
    	    cout<<endl;
    	}
    	else
    	{
    	    cout<<"1 3 ";
    	    for(int i=3;i<=n;i++)
    	    cout<<"2 ";
    	    cout<<endl;
    	}
    }
	
	return 0;
}

/* logic---
  xor of same number even times is 0
  1 ^ 1 ^ 1 ^ 1 = 0
  
  xor of same number odd times is the same number it self
  1 ^ 1 ^ 1 = 1
*/

//time _Complexity - O(t*N)
  