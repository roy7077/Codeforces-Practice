#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        
        bool flag=0;
        if((2*b-c)>0 and (2*b-c)%a==0)
        flag=1;
        else if((a+c)%(2*b)==0)
        flag=1;
        else if((2*b-a)>0 and (2*b-a)%c==0)
        flag=1;
        
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}

// time _Complexity - O(t)
