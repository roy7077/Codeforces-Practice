#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	if(str.length()==1)
	{
	    cout<<"YES"<<endl;
	    return 0;
	}
	map<char,int> mp;
	bool flag=0;
	for(auto it:str)
	{
	    mp[it]++;
	    if(mp[it]>=2)
	    {
	        flag=1;
	        break;
	    }
	    
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}

// time _Complexity - O(N)
// space _Complexity - O(N)
