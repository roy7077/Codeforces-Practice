#include <iostream>
#include <cstring>
using namespace std;

int solve(string& s,int ind,string output)
{
    //base case
    if(ind==s.length())
    {
        if(output=="QAQ")
        return 1;
        else
        return 0;
    }
    
    /* check if size of an output is 
       greater than 3 , in this case
       we are sure that this is not 
       going to our answer
    */
    if(output.length()>3)
    return 0;
    
    //recursive call
    //pick and not-pick
    int a=solve(s,ind+1,output);
    int b=solve(s,ind+1,output+s[ind]);
    
    return a+b;
}
int main() 
{
	string s;
	cin>>s;
	
	string output="";
	cout<<solve(s,0,output);
	return 0;
}

//time _Complex - O(exponential)
