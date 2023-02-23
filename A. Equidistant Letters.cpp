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
	    string s;
	    cin>>s;
	    
	    unordered_map<char,int> map;
	    for(auto it:s)
	    map[it]++;
	    
	    for(auto it:map)
	    {
	        int n=it.second;
	        while(n--)
	        cout<<it.first;
	    }
	    
	    cout<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
