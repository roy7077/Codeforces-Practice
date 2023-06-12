#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll n,a,x,b,y;
	cin>>n>>a>>x>>b>>y;
	
	int i=a; 
	int j=b; 
	
	bool flag=1;
	while(1)
	{
	 
	    if(i==j)
	    break;
	    
	    if(i==x or j==y)
	    {
	        flag=0;
	        break;
	    }
	    
	    
	    if(i==n)
	    i=1;
	    else
	    i++;
	    
	    if(j==1)
	    j=n;
	    else
	    j--;
	    
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	return 0;
}

// time _Complexity -  O(N)
// space _Complexity - O(1)
