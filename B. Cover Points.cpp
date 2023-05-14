#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	int ans=0;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    ans=max(ans,x+y);
	}
	
	cout<<ans<<endl;
	return 0;
}
