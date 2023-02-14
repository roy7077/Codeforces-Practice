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
    	cin>>n;
    	
    	if(n==1)
    	cout<<"2"<<endl;
    	else
    	{
    	    if(n%3==0)
    	    cout<<n/3<<endl;
    	    else
    	    cout<<(n/3)+1<<endl;
    	}
    	
    }
	return 0;
}

// time _Complexity - O(t)