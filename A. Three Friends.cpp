#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    vector<ll> v(3);
	    cin>>v[0]>>v[1]>>v[2];
	    
	    if(v[0]==v[1] and v[1]==v[2])
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    sort(v.begin(),v.end());
	    
	    if(v[0]==v[1])
	    {
	        v[0]++;
	        v[1]++;
	        
	        if(v[2]!=v[1])
	        v[2]--;
	    }
	    else
	    {
	        v[0]++;
	        if(v[1]!=v[0])
	        v[1]--;
	        
	        if(v[2]!=v[1])
	        v[2]--;
	    }
	   // for(int i=0;i<3;i++)
	   // {
	   //     if(i==1)
	   //     continue;
	        
	   //     if(i==0 and v[i]!=v[i+1])
	   //     v[i]++;
	       
	   //     if(i==2)
	   //     v[i]--;
	   // }
	    
	    ll sum=0;
	    sum+=v[2]-v[0];
	    sum+=v[1]-v[0];
	    sum+=v[2]-v[1];
	    
	    cout<<sum<<endl;
	}
	return 0;
}
