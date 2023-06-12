#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	
	string s;
	cin>>s;
	
	sort(s.begin(),s.end());

	char pre=s[0];
	int sum=s[0]-96;
	int cnt=1;
	for(int i=1;i<n;i++)
	{
	    if(cnt==k)
	    break;
	    
	    if(s[i]-pre>1)
	    {
	        cnt++;
	        pre=s[i];
	        sum+=s[i]-96;
	    }
	}
	
	if(cnt!=k)
	{
	    cout<<"-1"<<endl;
	    return 0;
	}
	
	cout<<sum<<endl;
	return 0;
}

//time _Complexity - O(NlogN)
//space _Complexity -
