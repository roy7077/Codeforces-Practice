#include <iostream>
using namespace std;
#define ll long long

//prime seive
int seive[10000005]={0};
void prime_seive(ll n)
{
    seive[1]=1;
    for(int i=2;i*i<n;i++)
    {
        if(seive[i]==0)
        {
            for(int j=i*i;j<n;j+=i)
            seive[j]=1;
        }
    }
}
int main() 
{
    
    //prime_seive(10000005);
    // for(int i=2;i<100;i++)
    // cout<<i<<"->"<<seive[i]<<endl;
	int t;
	cin>>t;
	while(t--)
	{
	    ll x,y;
	    cin>>x>>y;
	    
	    
	    if((x-y)%2==0 and (x-y)>1)
	    cout<<"YES"<<endl;
	    else if((x-y)%2==1 and (x-y)>1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	   // if(x-y<10000005 and seive[x-y]==0)
	   // {
	   //     cout<<"YES"<<endl;
	   //     continue;
	   // }
	    
	   // if((x-y)%2==0 or (x-y)%3==0)
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t)