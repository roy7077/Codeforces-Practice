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
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    bool flag=0;
	    for(int i=1;i<n-1;i++)
	    {
	        if(v[i]>v[i-1] and v[i]>v[i+1])
	        {
	            flag=1;
	            cout<<"YES"<<endl;
	            cout<<i-1+1<<" "<<i+1<<" "<<i+1+1<<endl;
	            break;
	        }
	    }
	    
	    if(!flag)
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time complexity - O(t*N)
// space complexity - O(N)