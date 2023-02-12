#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	string s1,s2;
	cin>>s1>>s2;
	int count=0;
	
	for(int i=0;i<s1.length();i++)
	{
	    if(s1[i]>s2[i])
	    {
	        int a=abs(s1[i]-s2[i]);
	        int b=9-s1[i]+s2[i]+1;
	        count+=min(a,b);
	        
	       // cout<<"i-> "<<i<<endl;
	       // cout<<"s1[i]-> "<<s1[i]<<endl;
	       // cout<<"s2[i]-> "<<s2[i]<<endl;
	       // cout<<min(a,b)<<endl;
	       // cout<<endl;
	    }
	    else
	    {
	        int a=abs(s2[i]-s1[i]);
	        int b=s1[i]+9-s2[i]+1;
	        count+=min(a,b);
	        
	       // cout<<"i-> "<<i<<endl;
	       // cout<<"s1[i]-> "<<s1[i]<<endl;
	       // cout<<"s2[i]-> "<<s2[i]<<endl;
	       // cout<<min(a,b)<<endl;
	       // cout<<endl;
	    }
	  }
	  cout<<count<<endl;
	return 0;
}

// time _Complexity - o(n)
