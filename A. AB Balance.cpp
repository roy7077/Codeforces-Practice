#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    
	    if(str[0]!=str.back())
	    str[0]=str.back();
	    
	    cout<<str<<endl;
	}
	return 0;
}

// time complexity - O(t)