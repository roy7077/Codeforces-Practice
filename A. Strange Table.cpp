#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,m,x;
	    cin>>n>>m>>x;
	    
	    ll col=x/n;
	    ll row=x%n;
	    
	    if(row>0)
	    col++;

        if(row==0)
        row=n;
        
	    cout<<(m*(row-1))+col<<endl;
	}
	return 0;
}

//time _Complexity - O(t)