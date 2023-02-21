#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll fact[13];
	fact[0]=1;
	fact[1]=1;
	for(int i=2;i<=12;i++)
	fact[i]=fact[i-1]*i;
	
	ll a,b;
	cin>>a>>b;
	if(a<b)
	cout<<fact[a]<<endl;
	else
	cout<<fact[b]<<endl;
	return 0;
}

// time _Complexity - O(12)