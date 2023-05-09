#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//comparator function
bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second>p2.second;
}

//main function
int main() 
{
	int n;
	cin>>n;
	
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++)
	{
	    cin>>v[i].second;
	    v[i].first=i;
	}
	
	sort(v.begin(),v.end(),cmp);
	vector<int> ans;
	int sum=0;
	int cnt=0;
	for(auto it:v)
	{
	    ans.push_back(it.first+1);
	    sum+=(cnt*it.second)+1;
	    cnt++;
	}
	
	cout<<sum<<endl;
	for(auto it:ans)
	cout<<it<<" ";
	return 0;
}

// time _Complexity - O(Nlog(N))