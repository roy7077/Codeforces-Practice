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
	    
	    int sum=0;
	    while(n--)
	    {
	        int input;
	        cin>>input;
	        
	        if(input==1 or input==3)
	        sum++;
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)