#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cstring>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    unordered_map<string,int> map;
    for(int i=0;i<n-1;i++)
    {
        string temp = s.substr(i, 2);
        map[temp]++;
    }
    
    int maxi=-1e9;
    string ans="";
    for(auto it:map)
    {
        if(it.second>maxi)
        {
            maxi=it.second;
            ans=it.first;
        }
    }
    
    cout<<ans<<endl;
	return 0;
}

// time _Complexity - O(n)