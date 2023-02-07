#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,h,m;
	    cin>>n>>h>>m;
	    
	    vector<int> alarm(1441,0);
	    while(n--)
	    {
	        int a,b;
	        cin>>a>>b;
	        
	        alarm[(a*60)+b]=1;
	    }
	    
	    bool flag=0;
	    int sleep=(h*60+m);
	    for(int i=sleep;i<=1440;i++)
	    {
	        if(alarm[i])
	        {
	            flag=1;
	            int req=i-sleep;
	            cout<<req/60<<" "<<req%60<<endl;
	            break;
	        }
	    }
	    
	    if(flag)
	    continue;
	    
	    for(int i=1;i<=sleep;i++)
	    {
	        if(alarm[i])
	        {
	           // cout<<"yes"<<endl;
	            int ans=1440-sleep+i;
	           // cout<<"i->"<<i<<endl;
	           // cout<<"ans->"<<ans<<endl;
	           // cout<<"sleep->"<<sleep<<endl;
	            cout<<ans/60<<" "<<ans%60<<endl;
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag)
	    continue;
	    
	    int ans=1440-sleep;
	    cout<<ans/60<<" "<<ans%60<<endl;
	    
	}
	return 0;
}

// time _Complexity - o(t*(n+1440)