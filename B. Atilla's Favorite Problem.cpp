#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	unordered_map<char,int> map;
	int i=1;
	for(char ch='a';ch<='z';ch++)
	{
	    map[ch]=i;
	    i++;
	}
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int maxi=0;
	    for(auto it:s)
	    {
	        if(map[it]>maxi)
	        maxi=map[it];
	    }
	    
	    cout<<maxi<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n) where n is a length of a string