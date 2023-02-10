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
	    
	    if(n%3==0)
	    cout<<(n/3)<<" "<<(n/3)+1<<" "<<(n/3)-1<<endl;
	    else
	    {
	        int rem=n%3;
	        if(rem==1)
	        cout<<(n/3)<<" "<<(n/3)+rem+1<<" "<<(n/3)-1<<endl;
	        else
	        cout<<(n/3)+1<<" "<<(n/3)+2<<" "<<(n/3)-1<<endl;
	    }
	}
	return 0;
}

// time _Complexity - O(t)
