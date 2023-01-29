#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(string s,int ind,vector<int>& memo)
{
    //base case
    if(ind>=s.length())
    return true;
    
    //memo check
    
    if(memo[ind]!=-1)
    return memo[ind];
    
    
    //recursive calls
    
    bool a,b,c;
    a=b=c=false;
    
    if(s[ind]=='1')
    a=solve(s,ind+1,memo);
    
    if(ind+1<s.length() and s[ind]=='1' and s[ind+1]=='4')
    b=solve(s,ind+2,memo);
    
    if(ind+2<s.length() and s[ind]=='1' and s[ind+1]=='4' and s[ind+2]=='4')
    c=solve(s,ind+3,memo);
    
    int ans=(a or b or c);
    
    memo[ind]=ans;
    return a or b or c;
    
}


int main() 
{
	string s;
	cin>>s;
	
	vector<int> memo(s.length()+3,-1);
	
	if(solve(s,0,memo))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	return 0;
}

//time _Complexity - O(length of a string)
