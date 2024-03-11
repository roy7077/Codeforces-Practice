#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool help(vector<int>& v)
{
    int n=v.size();
    for(int i=1;i<=n-2;i++)
    {
        if(v[i-1]>=1 and v[i]>=2 and v[i+1]>=1)
        {
            int mini=min({v[i-1],v[i],v[i+1]});
            v[i-1]=v[i-1]-mini;
            v[i]=v[i]-(2*mini);
            v[i+1]=v[i+1]-mini;
        }
    }
    
    for(auto it:v)
    {
        if(it)
        return 0;
    }
    
    return 1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    if(help(v))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
