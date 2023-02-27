#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() 
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	int l=0;
	int r=0;
	
	for(auto it:s)
	{
	    if(it=='L')
	    l++;
	    else
	    r++;
	}
	
	int a=-1*l;
	int b=1*r;
	
	int ans=abs(b-a);
	if(a<0 or b>0)
	ans++;
	
	cout<<ans<<endl;
	return 0;
}

// time _Complexity - O(n)