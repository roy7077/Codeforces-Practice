#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        
        //if there is only 1 element
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        
        //if there are 2 elements
        if(n==2)
        {
            cout<<m<<endl;
            continue;
        }
        
        cout<<2*m<<endl;
    }
}

// time _Complexity - O(t)