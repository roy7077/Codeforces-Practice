#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	
	bool ans=0;
	for(int i=0;i<5;i++)
	{
	    string x;
	    cin>>x;
	    
	    if(s[0]==x[0] or s[1]==x[1])
	    ans=1;
	}
	
	if(ans)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}

// time _Complexity - O(5)