#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
#define ll long long
int mod=1e9+7;
 
ll solve(string s,int k,unordered_map<char,int>& map)
{
    set<pair<int,int>> ans;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        ll hash1=0;
        ll pre1=1;
        
        ll bad=0;
        
        ll hash2=0;
        ll pre2=1;
        
        for(int j=i;j<n;j++)
        {
            if(map[s[j]]==0)
            bad++;
            
            hash1=(hash1+(((s[j]-'a'+1)*pre1)%mod))%mod;
            pre1=(pre1*31)%mod;
            
            hash2=(hash2+(((s[j]-'a'+1)*pre2)%mod))%mod;
            pre2=(pre2*37)%mod;
            
            if(bad<=k)
            ans.insert({hash1,hash2});
            else
            break;
        }
    }
    
    return ans.size();
}
 
 
 
 
 
 
int main() 
{
	string s;
	cin>>s;
	
	string ch;
	cin>>ch;
	
	//storring bad and good characters
	unordered_map<char,int> map;
	char chh='a';
	for(auto it:ch)
	{
	    //cout<<it-'0'<<endl;
	    map[chh]=it-'0';
	    chh++;
	}
	
	int k;
	cin>>k;
	
	ll ans=solve(s,k,map);
	cout<<ans<<endl;
	
	
	
	return 0;
}
 
//time _Complexity -  O(n^2)
//space _Complexity - O(n^2*k) - k is a avg length of a substrings