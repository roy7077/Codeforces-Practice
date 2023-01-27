#include <iostream>
#include <cstring>
using namespace std;

//function
bool solve(string str,bool flag)
{
    //base case
    if(str.length()<=1)
    return flag;
    
    //small calculation
    int i=0;
    int n=str.length();
    while(i<n-1 and str[i]==str[i+1])
    {
        i++;
    }
    
    if(i>=n-1)
    return flag;
    
    string a=str.substr(0,i);
    string b=str.substr(i+2);
    
    string final=a+b;
    bool ans=solve(final,(!flag));
    return ans;
    
}
int main() 
{
	
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    
	    bool flag=solve(str,1);
	    if(flag)
	    cout<<"NET"<<endl;
	    else
	    cout<<"DA"<<endl;
	}
	return 0;
}
