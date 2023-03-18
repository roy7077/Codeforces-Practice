#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    bool flag=1;
	    for(int i=0;i<s.length();i++)
	    {
	        if(flag)
	        {
	            if(s[i]=='a')
	            s[i]='b';
	            else
	            s[i]='a';
	            
	            flag=(!flag);
	        }
	        else
	        {
	            if(s[i]=='z')
	            s[i]='y';
	            else
	            s[i]='z';
	            
	            flag=(!flag);
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}


// time _Complexity - O(t*n)