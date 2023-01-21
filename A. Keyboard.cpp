#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;


/*
qwertyuiop
asdfghjkl;
zxcvbnm,./
*/
int main() {
	
	string s1="qwertyuiop";
	string s2="asdfghjkl;";
	string s3="zxcvbnm,./";
	
	//for right
	unordered_map<char,char> map1;
	
	for(int i=1;i<s1.length();i++)
	map1[s1[i]]=s1[i-1];
	
	for(int i=1;i<s2.length();i++)
	map1[s2[i]]=s2[i-1];
	
	for(int i=1;i<s3.length();i++)
	map1[s3[i]]=s3[i-1];
	
	//for left
	unordered_map<char,char> map2;
	
	for(int i=0;i<s1.length()-1;i++)
	map2[s1[i]]=s1[i+1];
	
	for(int i=0;i<s2.length()-1;i++)
	map2[s2[i]]=s2[i+1];
	
	for(int i=0;i<s3.length()-1;i++)
	map2[s3[i]]=s3[i+1];
	
	string input;
	char d;
	cin>>d;
	cin>>input;
	
	string ans="";
	if(d=='R')
	{
	    for(int i=0;i<input.length();i++)
	    ans+=map1[input[i]];
	}else
	{
	    for(int i=0;i<input.length();i++)
	    ans+=map2[input[i]];
	}

    cout<<ans<<endl;
	
	return 0;
}


