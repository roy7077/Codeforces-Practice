#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;

	    bool flag=1;
	    for(int i=0;i<str.length();i++)
	    {
	        char it=str[i];
	        
	        if(i==str.length()-1)
	        {
	            if(it!='Y' and it!='e' and it!='s')
    	        {
    	            flag=0;
    	            break;
    	        }
    	        else
    	        break;
	        }
	        
	        
	        if(it!='Y' and it!='e' and it!='s')
	        {
	            flag=0;
	            break;
	        }
	        
	        //if current is y
	        if(it=='Y')
	        {
	            if(str[i+1]!='e')
	            {
	                flag=0;
	                break;
	            }
	        }
	        
	        //if current is e
	        if(it=='e')
	        {
	            if(str[i+1]!='s')
	            {
	                flag=0;
	                break;
	            }
	        }
	        
	        //if current is s
	        if(it=='s')
	        {
	            if(str[i+1]!='Y')
	            {
	                flag=0;
	                break;
	            }
	        }
	    }
	    
	    
	    
	    if(!flag)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}

//time _Complexity - O(t*n)