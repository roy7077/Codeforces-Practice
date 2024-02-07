// Time complexity - O(N)
// Space complexity- O(N)
#include <iostream>
#include <vector>
#include <cstring>
#include <unordered_map>
using namespace std;
#define ll long long

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    unordered_map<int,vector<char>> mp;
	    char ch='a';
	    string str="";
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        
	        if(input==0)
	        {
	            str+=ch;
	            mp[0].push_back(ch);
	            ch++;
	        }
	        else
	        {
	            char temp=mp[input-1][mp[input-1].size()-1];
	            mp[input-1].pop_back();
	            mp[input].push_back(temp);
	            str+=temp;
	        }
	    }
	    
	    cout<<str<<endl;
	}
	return 0;
}
