#include <iostream>
using namespace std;

int main() 
{
    string x,y,z;
    cin>>x>>y>>z;
    
    int ans=0;
    int num=0;
    for(auto it:x)
    {
        num*=10;
        num+=(int(it))-48;
    }
    
    if(z[z.length()-1]=='k')
    {
        if(num==6 or num==5)
        ans+=53;
        else
        ans=52;
    }
    else
    {
        if(num<=28)
        ans+=12;
        else if(num==29)
        ans+=12;
        else if(num==30)
        ans+=11;
        else
        ans+=7;
    }
    cout<<ans<<endl;
	return 0;
}

// time _Complexity - O(N)
// space _Complexity - O(1)
