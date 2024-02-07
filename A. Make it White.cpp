// Time complexity - O(N)
// Space complexity- O(1)
#include <iostream>
#include <cstring>
using namespace std;

#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    int s=-1;
	    int e=-1;
	    
	    for(int i=0;i<str.length();i++)
	    {
	        if(str[i]=='B' and s==-1)
	        s=i;
	        
	        if(str[i]=='B')
	        e=i;
	    }
	    
	    if(s==-1)
	    cout<<"0"<<endl;
	    else
	    cout<<e-s+1<<endl;
	}
	return 0;
}
