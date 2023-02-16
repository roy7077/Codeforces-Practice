#include <iostream>
#include <cstring>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    //if number is already even
	    if((s[s.length()-1]-'0')%2==0)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    
	    //if first digit is even
	    if((s[0]-'0')%2==0)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    //checking in between
	    bool flag=0;
	    for(auto it:s)
	    {
	        if((it-'0')%2==0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"2"<<endl;
	    else
	    cout<<"-1"<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t*18)
