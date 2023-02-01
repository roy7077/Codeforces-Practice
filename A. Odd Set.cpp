#include <iostream>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int count_even=0;
	    int count_odd=0;
	    
	    for(int i=0;i<(2*n);i++)
	    {
	        int a;
	        cin>>a;
	        
	        if(a&1)
	        count_odd++;
	        else
	        count_even++;
	    }
	    
	    if(count_even==count_odd)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	
	return 0;
}

// time _Complexity - O( t * n )
