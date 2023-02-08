#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
	    
	    if(a==0)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    cout<<a+(2*b)+1<<endl;
	}
	return 0;
}

// time _Complexity - o(t)