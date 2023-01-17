#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
	
	ll n,k;
	cin>>n>>k;
	
	//if n is even
	if(n%2==0)
	{
	    if(k<=(n/2))
    	cout<<(2*k-1)<<endl;
    	else
    	cout<<(k-n/2)*2<<endl;
	}else
	{
	    if(k<=(n/2)+1)
	    cout<<(2*k-1)<<endl;
    	else
    	cout<<(k-((n/2)+1))*2<<endl;
	}
	
	
	return 0;
}









































// #include <iostream>
// #include <vector>
// using namespace std;
// #define ll long long

// int main() {
	
// 	ll n,k;
// 	cin>>n>>k;
	
// 	vector<ll> odd;
// 	vector<ll> even;
	
// 	//from 1 to n/2
// 	for(ll i=1;i<=(n/2);i++)
// 	{
// 	    if(i&1)
// 	    odd.push_back(i);
// 	    else
// 	    even.push_back(i);
// 	}
	
// 	//from n/2 to n
// 	for(ll i=(n/2)+1;i<=n;i++)
// 	{
// 	    if(i&1)
// 	    odd.push_back(i);
// 	    else
// 	    even.push_back(i);
// 	}
	
	
// 	if(n%2==0)
// 	{
// 	    if(k<=(n/2))
// 	    cout<<odd[k-1]<<endl;
// 	    else
// 	    cout<<even[k-(n/2)-1];
// 	}else
// 	{
// 	    if(k<=(n/2))
// 	    cout<<odd[k-1]<<endl;
// 	    else
// 	    cout<<even[k-((n/2)+1)-1];
// 	}
// 	return 0;
// }
