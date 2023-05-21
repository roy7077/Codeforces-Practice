#include <iostream>
#include <algorithm>
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
	    
	    int cnt=1;
	    for(int i=1;i<str.length();i++)
	    {
	        if(str[i]==str[i-1])
	        cnt++;
	        else
	        cnt=0;
	    }
	    
	    if(cnt==str.length())
	    cout<<"-1"<<endl;
	    else
	    {
	        sort(str.begin(),str.end());
	        cout<<str<<endl;
	    }
	}
	return 0;
}

// time _Complexity - O(NlogN)