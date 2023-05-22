#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> a(n),b(n);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    
	    //sorting an arrays
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<b[i])
	        a[i]++;
	    }
	    
	    unordered_map<int,int> mp1,mp2;
	    for(int i=0;i<n;i++)
	    {
	        mp1[a[i]]++;
	        mp2[b[i]]++;
	    }
	    
	    bool flag=1;
	    for(auto it:mp1)
	    {
	        if(mp2[it.first]!=it.second)
	        {
	            flag=0;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(T*NlogN)
// space _Complexity - O(N+N)