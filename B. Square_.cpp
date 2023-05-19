#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    
	    vector<int> v(4);
	    unordered_map<int,int> map;
	    int same=-1;
	    
	    for(int i=0;i<4;i++)
	    {
	        cin>>v[i];
	        map[v[i]]++;
	        
	        if(map[v[i]]>=2)
	        {
	            same=v[i];
	        }
	    }
	    
	    if(same==-1 or map.size()==4)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    int mini1=min(v[0],v[1]);
	    int maxi1=max(v[0],v[1]);
	    int mini2=min(v[2],v[3]);
	    int maxi2=max(v[2],v[3]);
	    
	    if(maxi1==maxi2 and (mini1+mini2==maxi1))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   // ll sum=0;
	   // for(int i=0;i<4;i++)
	   // {
	   //     if(v[i]!=same)
	   //     sum+=v[i];
	   // }
	    
	   // if(map[same]==3)
	   // sum+=same;
	    
	   // if(sum==same)
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	   // ll a,b,c,d;
	   // cin>>a>>b>>c>>d;
	    
	   // if((a!=c and a!=d) and (b!=c and b!=d))
	   // {
	   //     cout<<"NO"<<endl;
	   //     continue;
	   // }
	    
	   // if(a==c)
	   // {
	   //     if(b+d==a)
	   //     cout<<"YES"<<endl;
	   //     else
	   //     cout<<"NO"<<endl;
	   // }
	   // else if(a==d)
	   // {
	   //     if(b+c==a)
	   //     cout<<"YES"<<endl;
	   //     else
	   //     cout<<"NO"<<endl;
	   // }
	   // else if(b==c)
	   // {
    // 	    if(a+d==b)
	   //     cout<<"YES"<<endl;
	   //     else
	   //     cout<<"NO"<<endl;  
	   // }
	   // else if(b==d)
	   // {
	   //     if(a+c==b)
	   //     cout<<"YES"<<endl;
	   //     else
	   //     cout<<"NO"<<endl;  
	   // }
	   // else
	   // cout<<"NO"<<endl;
	}
	return 0;
}
