#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	
	vector<int> v(m);
	for(int i=0;i<m;i++)
	cin>>v[i];
	
	sort(v.begin(),v.end());
	int i=0;
	int j=n-1;
	int maxi=v[n-1]-v[0];
	
	while(j<m)
	{
	    maxi=min(maxi,v[j]-v[i]);
	    i++;
	    j++;
	    
	}
	
	if(maxi<0)
	cout<<"0"<<endl;
	else
	cout<<maxi<<endl;
	return 0;
}
