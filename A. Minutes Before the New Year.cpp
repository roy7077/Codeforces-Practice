#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int h,m;
	    cin>>h>>m;
	    
	    int ans=((24-h)*60)-m;
	    cout<<ans<<endl;
	}
	return 0;
}

// time _Complexity - O(t)