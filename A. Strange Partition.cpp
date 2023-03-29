#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    vector<ll> v(n);
	    ll Maxans=0;
	    ll sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        sum+=v[i];
	        
	        Maxans+=v[i]/x;
	        if(v[i]%x!=0)
	        Maxans++;
	    }
	    
	    ll Minans=sum/x;
	    if(sum%x!=0)
	    Minans++;
	    
	    cout<<Minans<<" "<<Maxans<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)