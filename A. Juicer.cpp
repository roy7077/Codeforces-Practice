#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll n,b,d;
	cin>>n>>b>>d;
	
	ll sum=0;
	ll count=0;
	for(int i=0;i<n;i++)
	{
	    ll input;
	    cin>>input;
	    
	    if(input<=b)
	    {
	        sum+=input;
	        if(sum>d)
	        {
	            count++;
	            sum=0;
	        }
	        
	    }
	}
	
	cout<<count<<endl;
	return 0;
}

// time complexity - O(n)
