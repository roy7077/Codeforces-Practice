#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x,y;
	    cin>>n>>x>>y;
	    
	    if((x!=0 and y!=0) or (x==0 and y==0))
	    {
	        //cout<<"yes"<<endl;
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    int num=x!=0?x:y;
	    //cout<<num<<endl;
	    if((n-1)%num==0)
	    {
	        int cnt=num;
	        int current=1;
	        for(int i=2;i<=n;i++)
	        {
	            if(cnt==0)
	            {
	                current=i;
	                cnt=num;
	            }
	            
	            cout<<current<<" ";
	            cnt--;
	        }
	        cout<<endl;
	        
	       // num++;
	       // for(int i=0;i<n;i+=num)
	       // {
	       //     for(int j=0;j<num-1;j++)
	       //     cout<<i+1<<" ";
	       // }
	        
	       // cout<<endl;
	    }
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*N)
