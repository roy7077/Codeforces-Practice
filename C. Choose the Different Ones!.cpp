// Time complexity - O(N+M)
// Space complexity- O(N+M)
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    unordered_map<int,int> mp1;
	    unordered_map<int,int> mp2;
	    
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        
	        if(input<=k)
	        mp1[input]++;
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        int input;
	        cin>>input;
	        
	        if(input<=k)
	        mp2[input]++;
	    }
	    
	    bool flag=1;
	    for(int i=1;i<=k;i++)
	    {
	        if(mp1.count(i) or mp2.count(i))
	        continue;
	        else
	        {
	            flag=0;
	            break;
	        }
	    }
	    
	    if(mp1.size()>=(k/2) and mp2.size()>=(k/2) and flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
