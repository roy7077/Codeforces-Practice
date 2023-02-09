#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    long long sum=0;
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        sum+=input;
	    }
	    
	    //if sum is equal to size of an aaray
	    if(sum==n)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    if(sum<n)
	    cout<<"1"<<endl;
	    else
	    cout<<sum-n<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)