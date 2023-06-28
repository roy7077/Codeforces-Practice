#include <iostream>
#include <set>
using namespace std;

int main() 
{
	set<char> st;
	st.insert('a');
	st.insert('e');
	st.insert('i');
	st.insert('o');
	st.insert('u');
	
	string str;
	cin>>str;
	
	if(str.length()==1)
	{
	    if(st.count(str[0]) or str[0]=='n')
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	    return 0;
	}
	bool flag=1;
	for(int i=0;i<str.length();i++)
	{
	    if(i==str.length()-1)
	    {
	        if(st.count(str[i]) or str[i]=='n')
    	    flag=1;
    	    else
    	    flag=0;
    	    
    	    break;
	    }
	    
	    if(str[i]=='n' or st.count(str[i]))
	    continue;
	    
	    if(st.count(str[i])==0)
	    {
	        if(st.count(str[i+1])==0)
	        {
	            flag=0;
	            break;
	        }
	    }
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	return 0;
}
