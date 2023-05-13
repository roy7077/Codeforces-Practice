#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
	ll n;
    cin>>n;
    
    vector<ll> odd,even;
    for(int i=0;i<n;i++)
    {
        ll input;
        cin>>input;
        
        if(input&1)
        odd.push_back(input);
        else
        even.push_back(input);
    }
    
    //sorting of an array
    sort(odd.begin(),odd.end(),greater<ll>());
    sort(even.begin(),even.end(),greater<ll>());
    
    int i=0;
    int j=0;
    bool flag;
    if(odd.size()>even.size())
    flag=1;
    else
    flag=0;
    
    while(1)
    {
        //ending loop condition
        if(flag and i>=odd.size())
        break;
        
        if(!flag and j>=even.size())
        break;
        
        if(flag)
        i++;
        else
        j++;
        
        flag=(!flag);
    }
    
    ll sum=0;
    for( ;i<odd.size();i++)
    sum+=odd[i];
    
    for( ;j<even.size();j++)
    sum+=even[j];
    
    cout<<sum<<endl;
	return 0;
}
