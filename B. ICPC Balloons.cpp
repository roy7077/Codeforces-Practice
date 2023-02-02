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
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    unordered_map<char,int> map;
	    int cnt=0;
	    for(auto it:s)
	    {
	        if(map.count(it))
	        cnt++;
	        else
	        cnt+=2;
	        
	        map[it]++;
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}

// time _Complexity - O( t * n)
