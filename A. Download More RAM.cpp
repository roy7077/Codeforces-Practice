#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// comparator function
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
}

// main function
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    vector<pair<int,int>> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i].first;
	    
	    for(int i=0;i<n;i++)
	    cin>>v[i].second;
	    
	    sort(v.begin(),v.end(),cmp);
	    int cnt=k;
	    for(auto it:v)
	    {
	        if(it.first<=cnt)
	        cnt+=it.second;
	        else
	        break;
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}

// time _Complexity - O(t*nlogn)