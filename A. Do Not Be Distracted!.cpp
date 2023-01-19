#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    unordered_map<char,int> map;
	    char curr=' ';
	    bool flag=1;
	    for(int i=0;i<n;i++)
	    {
	        if(str[i]!=curr)
	        {
	            if(map[str[i]]!=0)
	            {
	                flag=0;
	                break;
	            }else
	            {
	                curr=str[i];
	                map[str[i]]++;
	            }
	        }
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
