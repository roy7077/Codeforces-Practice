#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    string pi="314159265358979323846264338327";
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int count=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]==pi[i])
	        count++;
	        else
	        break;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
