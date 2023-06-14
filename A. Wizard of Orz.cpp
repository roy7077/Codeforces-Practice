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
	    
	    if(n==1)
	    cout<<"9"<<endl;
	    else
	    {
	        int num=9;
	        bool flag=1;
	        for(int i=1;i<=n;i++)
	        {
	            if(i==1)
	            cout<<"9";
	            else if(i==2)
	            cout<<"8";
	            else
	            {
	                cout<<num;
	                if(num==9)
	                {
	                    num=0;
	                    flag=0;
	                }
	                else
	                {
	                    if(flag)
	                    num--;
	                    else
	                    num++;
	                }
	                
	            }
	            
	        }
	        cout<<endl;
	    }
	}
	return 0;
}

//time _Complexity  - O(t*n)
//space _Complexity - O(N)