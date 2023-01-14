#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	vector<int> v(n);
	
	
	vector<int> v1,v2,v3;
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    if(v[i]==1)
	    v1.push_back(i+1);
	    else if(v[i]==2)
	    v2.push_back(i+1);
	    else
	    v3.push_back(i+1);
	}
	
	int mini=min({v1.size(),v2.size(),v3.size()});
	cout<<mini<<endl;
	for(int i=0;i<mini;i++)
	{
	    cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
	}
	return 0;
}
