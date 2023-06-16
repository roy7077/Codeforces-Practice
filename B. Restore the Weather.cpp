#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 2e5+10;
int id[N],a[N],b[N],res[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        for(int i=1;i<=n;i++) id[i]=i;
        sort(id+1,id+n+1,[&](const int p,const int q){
            return a[p]<a[q];
        });
        sort(b+1,b+n+1);
        for(int i=1;i<=n;i++)
        {
            int x=id[i];
            res[x]=i;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<b[res[i]]<<' ';
        }
        puts("");
    }
    return 0;
}
