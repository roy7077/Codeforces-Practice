#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	   if(k>n)
	   cout<<k-n<<endl;
	   else
	   cout<<(n-k)%2<<endl;
	}
	return 0;
}

// time _Complexity - O(t)