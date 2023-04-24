#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<(n+1)/2<<endl;
	    int i=1;
	    int j=(3*n);
	    
	    while(i<j)
	    {
	        cout<<i<<" "<<j<<endl;
	        i+=3;
	        j-=3;
	    }
	    
	}
	return 0;
}

// time complexity - O(n/2)

/* there is a difference between subsequence and substring
   subsequence is not a continus 
   substing is a continus
*/
