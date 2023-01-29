#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    //if first floor
	    if(n<=2)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    int ans=ceil(((double)(n-2)/x));
	    cout<<ans+1<<endl;
	}
	return 0;
}

//time _Complexity - O(t)