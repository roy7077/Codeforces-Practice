#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	string s;
	cin>>s;
	
	bool flag=0;
	for(int i=0;i<s.length();i++)
	{
	    if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
	    {
	        flag=1;
	        break;
	    }
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
