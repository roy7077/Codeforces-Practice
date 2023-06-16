#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    ll sum=0;
	    bool flag=0;
	    for(int i=0;i<n;i++)
	    {
	        ll input;
	        cin>>input;
	        
	        if(i==n-1)
	        continue;
	        
	        if(input!=0 or flag)
	        {
	            if(input==0)
	            sum++;
	            else
	            sum+=input;
	            flag=1;
	        }
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}

// time complexity  - O(t*N)
// space complexity - O(N)