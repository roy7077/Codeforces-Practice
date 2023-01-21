#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    //length and width of a retangle
	    int a,b;
	    cin>>a>>b;
	    
	    //min of a and b should be length
	    //max of a and b should be width
	    int hz=max(a,b);
	    int vh=min(a,b);
	    
	    vh*=2;
	    if(vh>hz)
	    hz+=vh-hz;
	    else if(hz>vh)
	    vh+=hz-vh;
	    
	    cout<<vh*hz<<endl;
	    
	}
	
	return 0;
}
