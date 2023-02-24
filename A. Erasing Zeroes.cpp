#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int st=-1;
	    int e=-1;
	    
	    //finding starting index
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='1')
	        {
	            st=i;
	            break;
	        }
	    }
	    
	    if(st==-1)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    //finding ending index
	    for(int i=s.length()-1;i>st;i--)
	    {
	        if(s[i]=='1')
	        {
	            e=i;
	            break;
	        }
	    }
	    
	    if(e==-1)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    //count
	    int count=0;
	    for(int i=st;i<=e;i++)
	    {
	        if(s[i]=='0')
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
