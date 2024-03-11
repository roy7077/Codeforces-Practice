#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int i=0;
	    int cnt=0;
	    while(i<=n-3)
	    {
	        string temp="";
	        temp+=s[i];
	        temp+=s[i+1];
	        temp+=s[i+2];
	        
	        if(temp=="map" or temp=="pie")
	        {
	            cnt++;
	            i+=3;
	        }
	        else
	        i++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
