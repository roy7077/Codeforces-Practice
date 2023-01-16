#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	string s;
	cin>>s;
	
	int one=0;
	int zero=0;
	bool flag=0;
	
	for(int i=0;i<s.length();i++)
	{
	    //if one or zero is greater than or equal to 7 then return
	    if(one>=7 or zero>=7)
	    {
	        flag=1;
	        break;
	    }
	    
	    if(s[i]=='0')
	    {
	        one=0;
	        zero++;
	    }else
	    {
	        one++;
	        zero=0;
	    }
	}
	
	if(flag or one>=7 or zero>=7)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
