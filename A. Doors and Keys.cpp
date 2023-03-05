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
	    bool flag=1;
	    for(auto it:s)
	    {
	        if(it>='a' and it<='z')
	        map[it]++;
	        else
	        {
	            char ch=it+32;
	            if(map[ch]>=1)
	            map[ch]--;
	            else
	            {
	                flag=0;
	                break;
	            }
	        }
	    }
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)