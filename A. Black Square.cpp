#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;
#define ll long long

int main() {
	
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	
	unordered_map<char,ll> map;
	map['1']=a;
	map['2']=b;
	map['3']=c;
	map['4']=d;
	
	string s;
	cin>>s;
	
	ll ans=0;
	for(int i=0;i<s.length();i++)
	ans+=map[s[i]];
	
	cout<<ans<<endl;
	return 0;
}
