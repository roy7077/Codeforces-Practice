#include <iostream>
using namespace std;
#define ll long long
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    ll count=0;
	    cin>>n;
	    
	    for(int i=1;i<=9;i++)
	    {
	        ll num=i;
	        while(num<=n)
	        {
	            count++;
	            num*=10;
	            num+=i;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
