#include <iostream>
#include <vector>
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
	    
	    int i3;
	    int sum=v[0]+v[1];
	    bool flag=0;
	    for(int i=2;i<n;i++)
	    {
	        if(v[i]>=sum)
	        {
	            flag=1;
	            i3=i;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"1 2 "<<i3+1<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}

// time _Complextiy - O(t*n)