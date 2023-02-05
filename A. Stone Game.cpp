#include <iostream>
#include <vector>
#include <algorithm>
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
	    int maxi=-1e9;
	    int mini=1e9;
	    
	    int min_pos=0;
	    int max_pos=0;
	    
	    //taking input and finding min and max
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]>maxi)
	        {
	            maxi=v[i];
	            max_pos=i;
	        }
	        
	        if(v[i]<mini)
	        {
	            mini=v[i];
	            min_pos=i;
	        }
	    }
	    
	    int a,b;
	    a=max(min_pos,max_pos);
	    b=min(min_pos,max_pos);
	    
	    int ans1=b+1+min(a-b,n-a);
	    int ans2=n-a+min(a-b,b+1);
	    
	   // cout<<b<<" "<<a<<endl;
	   // cout<<"min->"<<min_pos<<endl;
	   // cout<<"max->"<<max_pos<<endl;
	   // cout<<"ans1->"<<ans1<<endl;
	   // cout<<"ans2->"<<ans2<<endl;
	    
	    cout<<min(ans1,ans2)<<endl;
	    
	    
	}
	return 0;
}

// time _Complexity - O( t * n )
