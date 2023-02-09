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
	    
	    char ch;
	    cin>>ch;
	    
	    if(s.length()%2==0)
	    {
	        cout<<"No"<<endl;
	        continue;
	    }
	    
	    bool flag=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]==ch and i%2==0 and (s.length()-i-1)%2==0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}

//time _Complexity - o(t*n)