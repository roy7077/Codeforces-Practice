#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int mini=min({a,b,c});
	    int maxi=max({a,b,c});
	    
	    cout<<(a+b+c)-(mini+maxi)<<endl;
	}
	return 0;
}

//time _Complexity - O(t)