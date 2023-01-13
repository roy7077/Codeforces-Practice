#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    
    vector<ll> v(4);
    for(int i=0;i<4;i++)
    cin>>v[i];
    
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++)
    cout<<v[3]-v[i]<<" ";
    
    cout<<endl;
	return 0;
}
