#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    int ch1=s1[s1.length()-1];
	    int ch2=s2[s2.length()-1];
	    
	    // if last character is same
	    if(ch1!=ch2)
	    {
	        if(ch1>ch2)
	        cout<<"<"<<endl;
	        else
	        cout<<">"<<endl;
	        continue;
	    }
	    
	    if(ch1=='L')
	    {
	        if(s1.length()>s2.length())
	        cout<<">"<<endl;
	        else if(s1.length()<s2.length())
	        cout<<"<"<<endl;
	        else
	        cout<<"="<<endl;
	    }
	    else if(ch1=='S')
	    {
	        if(s1.length()>s2.length())
	        cout<<"<"<<endl;
	        else if(s1.length()<s2.length())
	        cout<<">"<<endl;
	        else
	        cout<<"="<<endl;
	    }
	    else
	    cout<<"="<<endl;
	}
	return 0;
}

// time _Complexity - O(t)