#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cstring>
using namespace std;

bool solve(int n,unordered_map<int,int>& map)
{
    //base case
    if(n==0)
    return true;
    
    if(n<0)
    return false;
    
    //small calculation
    for(int i=9;i>=1;i--)
    {
        if(map[i]!=1)
        {
            map[i]=1;
            bool a=solve(n-i,map);
            if(a)
            return true;
            else
            map[i]=0;
        }
    }
    
    return false;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    unordered_map<int,int> map;
	    bool ans=solve(n,map);
	    //cout<<ans<<endl;
	    string str="";
	    
	    for(auto it:map)
	    {
	        if(it.second==1)
	       {
	           char ch=char(it.first+48);
	           str+=ch;
	       }
	    }
	    
	    sort(str.begin(),str.end());
	    cout<<str<<endl;
	}
	return 0;
}

// time _Complexity - O(expo)