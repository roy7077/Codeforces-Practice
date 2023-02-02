#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
// 	vector<vector<int>> v(n,vector<int>(n,1));
	vector<int> pre(n,1);
// 	for(int i=0;i<n;i++)
// 	{
// 	    v[0][i]=1;
// 	    v[i][1]=1;
// 	}
	
	
	int maxi=1;
	for(int i=1;i<n;i++)
	{
	    vector<int> curr(n,1);
	    for(int j=1;j<n;j++)
	    {
	        curr[j]=pre[j]+curr[j-1];
	        maxi=max(curr[j],maxi);
	    }
	    pre=curr;
	}
	

	cout<<maxi<<endl;
	return 0;
}

// time _Complexity -  O(n*n)
// space _Complexity - O(2*n)
