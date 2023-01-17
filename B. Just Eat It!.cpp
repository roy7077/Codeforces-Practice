#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	
	//test cases
    ll t;
    cin>>t;
    while(t--)
    {
        //size of an array
        ll n;
        cin>>n;
        
        //taking input array's element
        vector<ll> v(n);
        ll sum1=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum1+=v[i];
        }
        
        //kadane algorithm
        ll maxi=v[0];
        ll sum=0;
        bool flag=1;
        
        int start=0;
        int end=0;
        for(int i=0;i<v.size();i++)
        {
            if(sum==0)
            start=i;
            
            sum+=v[i];
            if(sum>maxi)
            {
                maxi=sum;
                end=i;
            }
            
            if(sum<0)
            sum=0;
            
            /*checking - if subarray is not equal to size of 
              an array and maxi>=sum1 then return */ 
            if((end-start+1)!=n and maxi>=sum1)
            {
                flag=0;
                break;
            }
        }
        
        if(!flag)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	return 0;
}
