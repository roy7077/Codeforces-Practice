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
	    
	    //if string is of odd length
	    if(str.length()&1)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    bool flag=1;
	    int n=str.length();
	    for(int i=0;i<(n/2);i++)
	    {
	        if(str[i]!=str[(n/2)+i])
	        {
	            flag=0;
	            break;
	        }
	   }
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
