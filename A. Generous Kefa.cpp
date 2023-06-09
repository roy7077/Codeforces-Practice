#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	
	string str;
	cin>>str;
	
	map<char,int> mp;
	for(auto it:str)
	mp[it]++;
	
	bool flag=1;
	for(auto it:mp)
	{
	    if(it.second>k)
	    {
	        flag=0;
	        break;
	    }
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}

// time _Complexity - O(nlogn)
// space _Complexity - O(n)
