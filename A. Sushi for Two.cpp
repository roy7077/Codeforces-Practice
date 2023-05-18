#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
	
	int n;
	cin>>n;
	
	vector<ll> v(n);
	int cnt1=0;
	int cnt2=0;
	int pre=-1;
	int curr=-1;
    
    vector<pair<int,int>> p;
	for(int i=0;i<n;i++)
	{
	    int input;
	    cin>>input;
	    
	    if(input==1)
	    {
	        if(cnt2!=0)
	        {
	            p.push_back({cnt2,2});
	            cnt2=0;
	        }
	        cnt1++;
	    }
	    
	    if(input==2)
	    {
	        if(cnt1!=0)
	        {
	            p.push_back({cnt1,1});
	            cnt1=0;
	        }
	        cnt2++;
	    }
	    
	}
	
	//handling case
	if(cnt1!=0)
    {
        p.push_back({cnt1,1});
        cnt2=0;
    }
	
	if(cnt2!=0)
    {
        p.push_back({cnt2,2});
        cnt2=0;
    }
    
    int maxi=0;
    for(int i=0;i<p.size()-1;i++)
    {
        if(p[i].second!=p[i+1].second)
        {
            int mini=min(p[i].first,p[i+1].first);
            maxi=max(mini+mini,maxi);
        }
    }
    
    cout<<maxi<<endl;
    
    return 0;
}
