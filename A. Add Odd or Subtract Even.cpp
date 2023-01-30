#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    if(a==b)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    if(a>b)
	    {
	        if((a-b)&1)
	        cout<<"2"<<endl;
	        else
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        if((b-a)&1)
	        cout<<"1"<<endl;
	        else
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}
