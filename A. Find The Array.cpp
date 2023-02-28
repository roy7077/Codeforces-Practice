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
	    
	    int cnt=0;
	    int i=1;
	    int sum=0;
	    while(1)
	    {
	        if(sum>=n)
	        break;
	        
	        sum+=i;
	        i+=2;
	        cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}

// time _Complexity - O(t*sqrt(n))