#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
// #define ll long long
int main() 
{
	int t=1;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        vector<int>v;
        v.pb(a);
        int x = n;
        for(int i = 2;i<=n/2;i++){
            while(x==a or x==b)x--;
            v.pb(x);x--;
        }
        x=1;
        for(int i = n/2 + 1;i<=n;i++){
            while(x==a or x==b)x++;
            v.pb(x);x++;
        }
        v[n-1] = b;
        int f = 0;
        for(int i = 0;i<n/2;i++){
            if(v[i]<a){
                f=1;break;
            }
        }
        for(int i = n/2;i<n;i++){
            if(v[i]>b){
                f=1;
                break;
            }
        }
        if(f)cout<<-1;
        else for(auto i:v)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
