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
	    int even=0;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]%2==0)
	        even++;
	        
	        sum+=v[i];
	    }
	    
	    
	    if(sum&1)
	    cout<<"Yes"<<endl;
	    else if(even!=0 and (n-even)!=0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	}
	return 0;
}

// time _Complexity - O( t * n)
