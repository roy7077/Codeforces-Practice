#include <iostream>
#include <vector>
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
	    
	    ll temp=n;
	    ll k;
	    cin>>k;
	    
	    bool flag1=0;
	    bool flag2=0;
	    vector<int> v(60,0);
	    vector<int> temp_v(60,0);
	    while(temp--)
	    {
	        ll l,r;
	        cin>>l>>r;
	        
	        
	        if(l==k)
	        flag1=1;
	        
	        if(r==k)
	        flag2=1;
	       // if(k>=l and k<=r)
	       // {
	       //     temp_v[l]++;
	       //     temp_v[r+1]--;
	       // }
	    }
	    
	    if(flag1 and flag2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   // int cnt=0;
	   // int maxi=0;
	   // int index=-1;
	   // for(int i=0;i<60;i++)
	   // {
	   //     cnt+=temp_v[i];
	   //     v[i]+=cnt;
	        
	   //     if(v[i]>maxi)
	   //     {
	   //         maxi=v[i];
	   //         index=i;
	   //     }
	   // }
	    
	   // if(index==k)
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	}
	return 0;
}
