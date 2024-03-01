// Time complexity - O(T*N)
// Space complexity- O(1)
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        sum+=abs(input);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
