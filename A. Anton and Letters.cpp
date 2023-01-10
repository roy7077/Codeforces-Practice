#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() {

	string str;
    getline(cin,str); //because we have to take input include spaces
	
	unordered_map<char,int> map;
	for(int i=0;i<str.length();i++)
	{
	    if(str[i]==',' or str[i]=='{' or str[i]=='}' or int(str[i])==32)
	    continue;
	    
	    //put into map and save frequency
	    map[str[i]]++;
	}
	
	cout<<map.size()<<endl;
	return 0;
}
