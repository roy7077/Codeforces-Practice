
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	string ans="";
	int i=1;
	int cnt=1;
	while(i<=n)
	{
	    ans+=s[i-1];
	    i+=cnt;
	    cnt++;
	}
	
	cout<<ans<<endl;
	return 0;
}

// time _Complexity - O(n)