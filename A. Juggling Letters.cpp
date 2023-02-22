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
	    
	    unordered_map<char,int> map;
	    int i=n;
	    while(i--)
	    {
	        string s;
	        cin>>s;
	        
	        for(auto it:s)
	        map[it]++;
	    }
	    
	    bool flag=1;
	    for(auto it:map)
	    {
	        if(it.second%n!=0)
	        {
	            flag=0;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
 
// time _Complexity - O(t*n*length of a string)