#include <iostream>
using namespace std;
#define ll long long

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    //checking...is number odd
	    if(n&1)
	    {
	        cout<<"YES"<<endl;
	        continue;
	    }
	    
	    //if number is not odd
	    bool flag=0;
	    ll div = n;
        while(div > 2)
        {
            div /= 2;
            if(div&1) b 
            {
                if(n%div==0)
                {
                    flag=true;
                    break;
                }
            }
        }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
