#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	   
	   if(n==2)
	   {
	       cout<<"2 1"<<endl;
	       continue;
	   }
	   if(n%2==0)
	   {
	       for(int i=1;i<=n;i++)
    	   {
                if(i&1)
                cout<<i+1<<" ";
                else
                cout<<i-1<<" ";
            }
            cout<<endl;
            continue;
	   }
	   for(int i=1;i<=n-3;i++)
	   {
            if(i&1)
            cout<<i+1<<" ";
            else
            cout<<i-1<<" ";
        }
        
        cout<<n<<" "<<n-2<<" "<<n-1<<endl;
	    
	    
	}
	return 0;
}

// time _Complexity - O(t*n)