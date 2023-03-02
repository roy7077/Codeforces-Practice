#include <iostream>
#include <cstring>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    string ans="";
	    for(int i=0;i<(2*n-1);i++)
	    {
	        if(i%2==0)
	        ans+=s[i];
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
 
// time complexity - O(t*n)