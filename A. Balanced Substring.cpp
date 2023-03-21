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
	    
	    string str;
	    cin>>str;
	    
	    bool flag=0;
	    int l,r;
	    for(int i=0;i<str.length();i++)
	    {
	        string temp="";
	        int cnt_a=0;
	        int cnt_b=0;
	        l=i;
	        int j=i;
	        for(j=i;j<str.length();j++)
	        {
	            if(str[j]=='a')
	            cnt_a++;
	            else if(str[j]=='b')
	            cnt_b++;
	            
	            temp+=str[j];
	            
	            if(cnt_a!=0 and cnt_b!=0 and cnt_b==cnt_a)
	            {
	                flag=1;
	                break;
	            }
	        }
	        r=j;
	        if(flag)
	        break;
	    }
	    
	    if(flag)
	    cout<<l+1<<" "<<r+1<<endl;
	    else
	    cout<<"-1 -1"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*(n^2)