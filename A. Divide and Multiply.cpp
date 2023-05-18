#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

unordered_map<int,int> map;

void fun()
{
    
}
pair<int,bool> num(ll n)
{
    int i=0;
    while(1)
    {
        if(n%2==0)
        {
            cnt++;
            n/=2;
        }else
        return {i,false};
    }
    
    return {
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll> odd,even;
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        if(input&1)
	        odd.push_back(input);
	        else
	        even.push_back(input);
	    }
	    
	    //sorting an array
	    sort(odd.begin(),odd.end());
	    sort(even.begin(),even.end());
	    
	    if(odd.size()==0)
	    {
	        odd.push_back(even[even.size()-1]);
	        even.pop_back();
	    }
	    int cnt=0;
	    for(int i=0;i<even.size();i++)
	    {
	        
	    }
	    
	    cout<<"cnt->"<<cnt<<endl;
	    cout<<odd[0]<<endl;
	    for(int i=1;i<=cnt;i++)
	    odd[odd.size()-1]*=2;
	    
	    ll sum=0;
	    for(int i=0;i<odd.size();i++)
	    sum+=odd[i];
	    
	    sum+=even.size();
	    
	    cout<<sum<<endl;
	}
	return 0;
}
