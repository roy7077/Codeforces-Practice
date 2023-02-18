#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
 
void solve()
{
    vector<int>a(6);
    for(int i=0;i<6;i++) 
    cin>>a[i];
    
    int dist = abs(a[2]-a[0]) + abs(a[1]-a[3]);
    
    if(a[0]==a[2] && a[0]==a[4])
    {
        if((a[5]>a[1] && a[5]<a[3]) || (a[5]<a[1] && a[5]>a[3]))
        { 
            dist+=2;
        }
    }
    else if(a[1]==a[3] && a[1]==a[5])
    {
        if((a[4]>a[0] && a[4]<a[2])|| (a[4]<a[0] && a[4]>a[2]))
        { 
            dist+=2;
        }
    } 
    cout<<dist<<"\n";
}  
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

//time _Complexity - O(t*6)