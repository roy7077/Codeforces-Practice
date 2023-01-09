#include <iostream>
using namespace std;
#define ll long long
int main()
{
    
    ll k,n,w;
    cin>>k>>n>>w;
    
    ll req=(w*(((double)(w+1))/2)*k)-n;
    if(req<=0)
    cout<<"0"<<endl;
    else
    cout<<req<<endl;
    return 0;
}