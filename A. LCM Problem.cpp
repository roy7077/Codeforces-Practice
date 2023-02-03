#include <iostream>
using namespace std;
#define ll long long

// ll seive[10000000]={1};
// void prime_seive()
// {
//     ll n=10000001;
//     seive[0]=0;
//     seive[1]=0;
//     for(ll i=2;i*i<=n;i++)
//     {
//         if(seive[i]==1)
//         {
//             for(ll j=i*i;j<=n;j+=i)
//             seive[j]=0;
//         }
//     }
// }
int main() 
{
	//prime_seive();
	ll t;
	cin>>t;
	while(t--)
	{
	    ll l,r;
	    cin>>l>>r;
	    
	    if(2*l<=r)
	    cout<<l<<" "<<2*l<<endl;
	    else
	    cout<<"-1 -1"<<endl;
	    
	    
	    
	   // ll num=l;
	   // if(seive[num]==1)
	   // num++;
	    
	   // bool flag=false;
	   // for(ll i=num+1;i<=r;i++)
	   // {
	   //     ll lcm=num*i;
	   //     if(lcm<=r)
	   //     {
	   //         cout<<num<<" "<<i<<endl;
	   //         flag=1;
	   //         break;
	   //     }
	   //     else
	   //     {
	   //         flag=0;
	   //         break;
	   //     }
	   // }
	    
	   // if(!flag)
	   // cout<<"-1 -1"<<endl;
	}
	return 0;
}


// time _Complexity - O(t)