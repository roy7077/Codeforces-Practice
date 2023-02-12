#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void binary_search(vector<ll>& v,int s,int e,ll element,ll& index)
{
    if(s>e)
    return ;
    
    int mid=(s+e)/2;
    
    //if found an element
    if(v[mid]==element)
    {
        index=mid;
        return ;
    }
    
    if(v[mid]<element)
    {
        index=mid;
        binary_search(v,mid+1,e,element,index);
    }
    else
    {
        binary_search(v,s,mid-1,element,index);
    }
    
}
int main() 
{
	vector<ll> v;
	ll count=1;
	for(int i=0;i<=9;i++)
	{
	    v.push_back(count);
	    count*=10;
	}
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    ll index=0;
	    binary_search(v,0,v.size()-1,n,index);
        //cout<<"element "<<v[index]<<endl;
	    cout<<n-v[index]<<endl;
	   
	}
// 	for(auto it:v)
// 	cout<<it<<endl;
	return 0;
}

// time _Complexity - o(t * log9)
