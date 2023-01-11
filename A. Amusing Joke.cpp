#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() {
	
	string s1,s2,sf;
	cin>>s1>>s2>>sf;
	
	unordered_map<char,int> map1;
	unordered_map<char,int> map2;
	
	//if lengths are different then return NO
	if(s1.length()+s2.length()!=sf.length())
	{
	    cout<<"NO"<<endl;
	    return 0;
	}
	
	//storing the frequency of s1 and s2 in map1
	for(int i=0;i<s1.length();i++)
	map1[s1[i]]++;
	
	for(int i=0;i<s2.length();i++)
	map1[s2[i]]++;
	
	//storing the frequency of sf in map2
	for(int i=0;i<sf.length();i++)
	map2[sf[i]]++;
	
	//if size of both map are different then return NO
	if(map1.size()!=map2.size())
	{
	    cout<<"NO"<<endl;
	    return 0;
	}
	
	//check is frequency matches in both maps or not
	for(auto it:map1)
	{
	    if(it.second!=map2[it.first])
	    {
	        cout<<"NO"<<endl;
	        return 0;
	    }
	}
	
	cout<<"YES"<<endl;
	return 0;
}
