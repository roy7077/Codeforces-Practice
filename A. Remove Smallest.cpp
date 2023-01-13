#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
	
	//number of test cases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking size of an array
	    ll n;
	    cin>>n;
	    
	    //taking array input
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    //sorting an array
	    sort(v.begin(),v.end());
	    bool flag=1;
	    for(int i=0;i<n-1;i++)
	    {
	        //we difference is greater than 1 ..... return with false
	        if(abs(v[i]-v[i+1])>1)
	        {
	            flag=0;
	            break;
	        }else
	        {
	            if(v[i]>v[i+1])
	            {
	                v[i+1]=v[i];
	            }
	        }
	   }
	   
	   if(flag)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
