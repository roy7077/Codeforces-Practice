#include <iostream>
#include <cstring>
#include <unordered_map>
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
	    
	    int one=0;
	    int more=0;
	    for(auto it:map)
	    {
	        if(it.second>=2)
	        more++;
	        else
	        one++;
	    }
	    
	    cout<<(one/2)+more<<endl;
	}
	return 0;
}

// time _Complexity - O(t*length of string)
