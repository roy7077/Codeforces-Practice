#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int x=0;
	    int y=0;
	    
	    bool flag=0;
	    for(auto it:s)
	    {
	        if(it=='U')
	        y++;
	        else if(it=='D')
	        y--;
	        else if(it=='L')
	        x--;
	        else if(it=='R')
	        x++;
	        
	        if(x==1 and y==1)
	        {
	            cout<<"Yes"<<endl;
	            flag=1;
	            break;
	        }
	    }
	    
	    if(!flag)
	    cout<<"No"<<endl;
	}
	return 0;
}

// time _Complexity - o(t*n)
