#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;

	    string ans="";
	    char ch='a';
	    for(int i=0;i<a;i++)
	    {
	        if(b!=0)
	        {
	            ans+=ch;
	            ch++;
	            b--;
	        }
	        else
	        ans+=ans[0];
	   }
	   
	   string final_ans="";
	   for(int i=0;i<(n/a);i++)
	   final_ans+=ans;
	   
	   for(int i=0;i<(n%a);i++)
	   final_ans+=ans[i];
	   
	   cout<<final_ans<<endl;
	}
	return 0;
}
