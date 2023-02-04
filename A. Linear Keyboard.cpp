#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string key;
	    cin>>key;
	    
	    string str;
	    cin>>str;
	    
	    unordered_map<char,int> map;
	    for(int i=0;i<key.length();i++)
	    map[key[i]]=i;
	    
	    int cnt=0;
	    int pre=map[str[0]];
	    for(int i=1;i<str.length();i++)
	    {
	        cnt+=abs(pre-map[str[i]]);
	        pre=map[str[i]];
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}

// time _Complexity - O( t * n )
