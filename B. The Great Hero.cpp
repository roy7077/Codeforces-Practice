#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
    	cin>>a>>b>>n;
    	
    	vector<ll> A(n);
    	vector<ll> B(n);
    	
    	for(int i=0;i<n;i++)
    	cin>>A[i];
    	
    	for(int i=0;i<n;i++)
    	cin>>B[i];
    	
    	bool flag=1;
    	int mx=0;
    	for(int i=0;i<n;i++)
    	{
    	   
    	    int need=ceil(double(B[i])/a);
    	    b-=need*A[i];
    	    if(A[i]>mx)
    	    mx=A[i];
    	 
    	   // if(i==0 and n==1)
    	   // {
    	   //     if(b-need*A[i]<0)
    	   //     {
    	   //         flag=0;
    	   //         break;
    	   //     }
    	   //     else
    	   //     continue;
    	   // }
    	    
    	   // if(a<B[i])
    	   // {
    	   //     flag=0;
    	   //     break;
    	   // }
    	    
    	   // else if(i!=n-1)
    	   // {
    	   //     if(b-need*A[i]<0)
    	   //     {
    	   //         flag=0;
    	   //         break;
    	   //     }
    	   // }
    	    
    	    
    	 }
    	 
    	 if(mx+b>0)
    	 cout<<"YES"<<endl;
    	 else
    	 cout<<"NO"<<endl;
    }
	
	return 0;
}
