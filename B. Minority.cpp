#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int one=0;
	    int zero=0;
	    
	    for(auto it:s)
	    {
	        if(it=='0')
	        zero++;
	        else
	        one++;
	    }
	    
	    if(one==zero)
	    {
	        if(n>2)
	        cout<<(s.length()-1)/2<<endl;
	        else
	        cout<<"0"<<endl;
	    }
	    else 
	    cout<<min(one,zero)<<endl;
	}
	return 0;
}

// time _Complextiy - O(t*n)