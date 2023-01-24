#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int j=n;
	    int ans=1;
	    while(j>=1)
	    {
	        if(j%2==0 and j!=2)
	        {
	            ans=j/2;
	            break;
	        }
	        j--;
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}

//time complexity - O(t*n)
