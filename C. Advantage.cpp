#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll> v(n);
        pair<ll,ll> first={0,-1e9};
        pair<ll,ll> second={0,-1e9};
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>first.second)
            {
                second=first;
                first={i,v[i]};
            }
            else if(v[i]>second.second)
            {
                second={i,v[i]};
            }
            
        }
        
        // cout<<"first -> "<<first.first<<" "<<first.second<<endl;
        // cout<<"second -> "<<second.first<<" "<<second.second<<endl;
        
        for(int i=0;i<n;i++)
        {
            if(i==first.first)
            cout<<v[i]-second.second<<" ";
            else
            cout<<v[i]-first.second<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}
 
//time complexity - O(t*n)