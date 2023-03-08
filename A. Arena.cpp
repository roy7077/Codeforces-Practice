#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
        ll a[n+5];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());
        ll ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] > a[j]){
                    ans++;
                    break;
                }
            }
        }

        cout<<ans<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t*n^2)
