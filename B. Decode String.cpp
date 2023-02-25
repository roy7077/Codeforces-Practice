#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() 
{
    unordered_map<int,char> map;
    char ch='a';
    for(int i=1;i<=26;i++)
    {
        map[i]=ch;
        ch++;
    }
    
    // for(auto it:map)
    // cout<<it.first<<"->"<<it.second<<endl;
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    
	    string s;
	    cin>>s;
	    
	    string ans="";
	    for(int i=n-1;i>=0;)
	    {
	        if(s[i]=='0' and i-1>=0 and s[i-1]=='0')
	        {
	            int num=(s[i-2]-'0')*10+(s[i-1]-'0');
	            ans+=map[num];
	            i-=3;
	        }
	        else if(s[i]=='0')
	        {
	            int num=(s[i-2]-'0')*10+(s[i-1]-'0');
	            ans+=map[num];
	            i-=3;
	        }
	        else
	        {
	            ans+=map[s[i]-'0'];
	            i--;
	        }
	    }
	    reverse(ans.begin(), ans.end());
	    cout<<ans<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)