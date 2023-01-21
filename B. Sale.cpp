#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	sort(v.begin(),v.end());
	int ind=0;
	int ans=0;
	while(ind<n and ind<m)
	{
	    if(v[ind]<0)
	    ans+=v[ind];
	    else
	    break;
	    
	    ind++;
	}
	
	cout<<-ans<<endl;
	return 0;
}

// time _Complexity - O(nlogn)
