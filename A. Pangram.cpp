#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	string str;
	cin>>str;
	
	unordered_map<char,int> map;
	for(int i=0;i<str.length();i++)
	{
	    //if character is in uppercase than convert it into lowercase
	    if(str[i]>='A' and str[i]<='Z')
	    str[i]=char(int(str[i])+32);
	    
	    //put into map and save frequency
	    map[str[i]]++;
	}
	
	//if size of map is 26 that means we got all alphabet 'a' to 'z'
	if(map.size()==26)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
