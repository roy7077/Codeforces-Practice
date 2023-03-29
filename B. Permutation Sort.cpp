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
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    bool flag1=0;
	    bool flag2=0;
	    bool flag3=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        if(v[i]!=(i+1))
	        {
	            if(i==0)
	            flag1=1;
	            else if(i==n-1)
	            flag2=1;
	            else
	            flag3=1;
	        }
	    }
	    
	    if(v[0]==n and v[n-1]==1)
	    {
	        cout<<"3"<<endl;
	        continue;
	    }
	    if(flag1 and flag2)
	    cout<<"2"<<endl;
	    else if(flag3 or flag1 or flag2)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t*n)