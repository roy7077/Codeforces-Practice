#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	string s;
	cin>>s;
	
	string ans="";
	bool flag=0;
	for(int i=0;i<s.length()-1;i++)
	{
	    if(s[i]=='-' and s[i+1]=='.')
	    {
	        if(i==s.length()-2)
	        {
	            flag=1;
	        }
	        i++;
	        ans+='1';
	    }
	    else if(s[i]=='-' and s[i+1]=='-')
	    {
	        if(i==s.length()-2)
	        {
	            flag=1;
	        }
	        
	        i++;
	        ans+='2';
	    }else
	    {
	        ans+='0';
	    }
	}
	
	if(flag)
	cout<<ans<<endl;
	else
	cout<<ans+'0'<<endl;
	return 0;
}
