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
	    vector<ll> v(7);
	    for(int i=0;i<7;i++)
	    cin>>v[i];
	    
	    ll sum=v[6];
	    for(int i=0;i<6;i++)
	    {
	        bool ans=0;
	        for(int j=i+1;j<6;j++)
	        {
	            bool flag=0;
	            for(int k=j+1;k<6;k++)
	            {
	                if(v[i]+v[j]+v[k]==sum)
	                {
	                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
	                    flag=1;
	                    break;
	                }
	            }
	            if(flag)
	            {
	               ans=1;
	               break;
	            }
	        }
	        if(ans)
	        break;
	    }
	}
	return 0;
}

//time _Complexity - O(t*n^3)
