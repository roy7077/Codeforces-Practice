#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	if(n==1 or n==2)
	{
	    cout<<"0"<<endl;
	    return 0;
	}
	
	sort(v.begin(),v.end());
	
	cout<<min(v[n-2]-v[0],v[n-1]-v[1])<<endl;
	return 0;
}

// time _Complexity - O(n+nlogn)