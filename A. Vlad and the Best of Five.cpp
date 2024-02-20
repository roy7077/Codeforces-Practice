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
	    
	    int a=0;
	    int b=0;
	    for(auto it:s)
	    {
	        if(it=='A')
	        a++;
	        else
	        b++;
	    }
	    
	    if(a>b)
	    cout<<"A"<<endl;
	    else
	    cout<<"B"<<endl;
	}
	return 0;
}