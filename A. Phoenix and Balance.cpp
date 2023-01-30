#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    ll sum1=pow(2,n);
	    ll sum2=0;
	    
	    ll power=2;
	    
	    for(int i=1;i<n;i++)
	    {
	        if(i<n/2)
	        sum1+=power;
	        else
	        sum2+=power;
	        
	        power*=2;
	    }
	    //first half
	   // for(int i=1;i<=(n/2);i++)
	   // {
	   //     if(i&1)
	   //     sum1+=power;
	   //     else
	   //     sum2+=power;
	        
	   //     power*=2;
	   // }
	    
	   //// 2 4     8 6

	   ////  cout<<sum1<<endl;
	   ////  cout<<sum2<<endl;
	   // //second half
	   // for(int i=(n/2)+1;i<=n;i++)
	   // {
	   //     if((n/2)&1)
	   //     {
	   //         if(i&1)
    // 	        sum1+=power;
    // 	        else
    // 	        sum2+=power;
	   //     }
	   //     else
	   //     {
	   //         if(i&1)
    // 	        sum2+=power;
    // 	        else
    // 	        sum1+=power;
	   //     }
	   //     power*=2;
	   // }
	    
	   // cout<<sum1<<endl;
	   // cout<<sum2<<endl;
	    cout<<abs(sum1-sum2)<<endl;
	}
	return 0;
}

//time _Complexity - O(n)
