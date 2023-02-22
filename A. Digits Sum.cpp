#include <iostream>
using namespace std;
#define ll long long
 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	   ll n;
	   cin>>n;
	   
	   ll ans;
	   ans=(n/100)*10;
	   n%=100;
	   ans+=(n/10);
	   n%=10;
	   if(n==9)
	   ans++;
	   
	   cout<<ans<<endl;
	}
	return 0;
}
 
// time _Complexity - o(t)