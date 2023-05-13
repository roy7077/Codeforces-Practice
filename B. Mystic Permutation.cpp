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
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    if(n==1)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    vector<int> temp=v;
	    sort(temp.begin(),temp.end());
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]==temp[i])
	        {
	            if(i==n-1)
	            swap(temp[i],temp[i-1]);
	            else
	            swap(temp[i],temp[i+1]);
	        }
	    }
	    
	    bool flag=1;
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]==temp[i])
	        {
	            flag=0;
	            break;
	        }
	    }
	    
	    if(flag)
	    {
	        for(auto it:temp)
	        cout<<it<<" ";
	        cout<<endl;
	    }
	    else
	    cout<<"-1"<<endl;
	    
	}
	return 0;
}
