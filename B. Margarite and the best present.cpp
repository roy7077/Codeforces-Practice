#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        
        if(l==1)
        l=0;
        else
        {
            l--;
            if(l%2)
            l=-1*((l/2)+1);
            else
            l/=2;
            
        }
        
        if(r%2==0)
        r/=2;
        else
        r=-1*((r/2)+1);
        
        cout<<r-l<<endl;
        
        
    }
	return 0;
}

// time _Complexity -  O(t)
// sapce _Complexity - O(1)