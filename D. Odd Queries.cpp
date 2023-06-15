#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        
	        if(i!=0)
	        v[i]+=v[i-1];
	    }
	    
	    while(q--)
	    {
	        int l,r,k;
	        cin>>l>>r>>k;
	        
	        int sum;
	        if(l==1)
	        sum=0;
	        else
	        sum=v[l-2];
	        
	        sum=v[r-1]-sum;
	        if((v[n-1]-sum+(r-l+1)*k)&1)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

//time _Complexity - O(t*q*N)
//space _Complexity - O(N)