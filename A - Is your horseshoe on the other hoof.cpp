#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long

int main()
{
    //four shoes colour
    vector<ll> v(4);
    unordered_map<ll,ll> map;
    
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
        //storing the frequency 
        map[v[i]]++;
    }
    
    cout<<4-map.size()<<endl;

    return 0;
}