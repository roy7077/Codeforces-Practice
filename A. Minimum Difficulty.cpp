#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
int main() 
{
// 	ll n;
// 	cin>>n;
	
// 	vector<ll> v(n);
// 	for(int i=0;i<n;i++)
// 	cin>>v[i];
	
// 	ll mini=1e9;
	
// 	for(int i=1;i<n-1;i++)
// 	{
// 	    ll maxi=0;
// 	    for(int j=0;j<n-1;j++)
// 	    {
// 	        if(j==i)
// 	        continue;
	        
// 	        if(j==i-1 and j+2<n)
// 	        maxi=max(maxi,v[j+2]-v[j]);
// 	        else
// 	        maxi=max(maxi,v[j+1]-v[j]);
// 	    }
	    
// 	    mini=min(maxi,mini);
// 	}
	
// 	cout<<mini<<endl;
    int n;
    cin >> n;
    int r[n], d[n - 1], s(0), m(1000);
    cin >> r[0];

    for (int i = 1; i < n; i++)
    {
        cin >> r[i];
        d[i] = r[i] - r[i - 1];
        s = max(s, d[i]);
    }

    for (int i = 2; i < n; i++)
        m = max(min(m, d[i] + d[i - 1]), s);

    cout << m << endl;
	return 0;
}

// time _Complexity - O(n^2)