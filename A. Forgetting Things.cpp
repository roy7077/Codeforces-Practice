#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int main() 
{
    ll a,b;
    cin>>a>>b;
    
    if(a==9 and b==1)
    {
        cout<<"9 10"<<endl;
        return 0;
    }
    if(abs(a-b)>=2 or a>b)
    cout<<"-1"<<endl;
    else
    {
        if(a==b)
        cout<<(a*10+2)<<" "<<(b*10+3)<<endl;
        else
        cout<<(a*100+99)<<" "<<(b*100)<<endl;
    }
    
	return 0;
}
