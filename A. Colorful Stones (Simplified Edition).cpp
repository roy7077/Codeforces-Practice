#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	string s;
	string t;
	cin>>s>>t;
	
	int i=0;
	int j=0;

	while(j<t.length())
	{
	    if(s[i]==t[j])
	    i++;
	    j++;
	}
	
	cout<<i+1<<endl;
	return 0;
}

// time _Complexity - O(length of string t)