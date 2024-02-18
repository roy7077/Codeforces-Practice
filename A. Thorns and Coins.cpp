#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int help(string& s,int i,vector<int>& memo)
{
    //base case
    if(i>=s.length() or s[i]=='*')
    return 0;
    
    //memo check
    if(memo[i]!=-1)
    return memo[i];
    
    //recursive calls
    //and small calculation
    int a,b;
    a=b=0;
    
    if(s[i]=='@')
    a=1+help(s,i+1,memo);
    else
    a=help(s,i+1,memo);
    
    if(s[i]=='@')
    b=1+help(s,i+2,memo);
    else
    b=help(s,i+2,memo);
    
    return memo[i]=max(a,b);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    vector<int> memo(str.length()+1,-1);
	    cout<<help(str,0,memo)<<endl;
	}
	return 0;
}
