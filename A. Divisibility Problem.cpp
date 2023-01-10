#include <iostream>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
	    
	    //if a is already divisible by b then return 0
	    if(a%b==0)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    //calculating required number to add into a 
	    //in order to make a divisible by b
	    ll req=b-(a%b);
	    cout<<req<<endl;
	}
	
	return 0;
}
