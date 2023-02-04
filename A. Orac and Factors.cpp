#include <iostream>
using namespace std;
#define ll long long

//prime seive - for factors
int seive[1000001];
void prime_seive()
{
    int n=1000000;
    for(int i=0;i<=n;i++)
    seive[i]=0;
    
    for(int i=2;i*i<=n;i++)
    {
        if(seive[i]==0)
        {
            seive[i]=i;
            for(int j=i*i;j<=n;j+=i)
            {
                if(seive[j]==0)
                seive[j]=i;
            }
        }
    }
    
    //in seive[i] for prime numbers after sprt(n) is 0
    //after sqrt(n) we have to take care of those numbers
    for(int i=2;i<=n;i++)
    {
        if(seive[i]==0)
        seive[i]=i;
    }
}

int main() 
{
	int t;
	cin>>t;
	
	prime_seive();
	while(t--)
	{
	    ll n;
	    ll k;
	    cin>>n>>k;
	    
	   // for(int i=2;i<100;i++)
	   // cout<<i<<"->"<<seive[i]<<endl;
	    ll a1=seive[n];
	    cout<<n+a1+(2*(k-1))<<endl;
	   // for(int i=0;i<=5;i++)
	   // cout<<seive[i]<<" ";
	   
	   // for(int i=1;i<=k;i++)
	   // {
	   //     if(n%2==0)
	   //     {
	   //         n+=2*(k-i+1);
	   //         break;
	   //     }
	        
	   //     if(seive[n])
	   //     {
	   //         n+=n;
	   //     }
	   //     else if(n&1)
	   //     {
	   //         if(n%3==0)
	   //         n+=3;
	   //         else
	   //         n+=5;
	            
	   //         n+=2*(k-i+2);
	   //         break;
	   //     }
	   // }
	    
	   // cout<<n<<endl;
	}
	return 0;
}

// time _Complexity - for prime_seive * O(t)