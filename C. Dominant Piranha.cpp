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
	    int maxi=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        maxi=max(maxi,v[i]);
	    }
	    
	    int pos=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(i>0 and i<n-1 and v[i]==maxi and (v[i-1]<v[i] or v[i+1]<v[i]))
	        {
	            pos=i;
	            break;
	        }
	        else if(i==0 and v[i]==maxi and v[i+1]<v[i])
	        {
	            pos=i;
	            break;
	        }
	        else if(i==n-1 and v[i]==maxi and v[i-1]<v[i])
	        {
	            pos=i;
	            break;
	        }
	    }
	    
	    if(pos==-1)
	    cout<<"-1"<<endl;
	    else
	    cout<<pos+1<<endl;
	}
	return 0;
}
