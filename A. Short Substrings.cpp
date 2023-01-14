#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    //adding first and second character to final_str
	    string final_str="";
	    final_str+=s[0];
	    final_str+=s[1];
	    
	    for(int i=3;i<s.length();i+=2)
	    {
	        final_str+=s[i];
	    }
	    
	    cout<<final_str<<endl;
	}
	return 0;
}
