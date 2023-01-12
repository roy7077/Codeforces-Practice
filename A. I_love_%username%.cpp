#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	//taking input
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	//seting v[0] as mini and maxi
	int maxi=v[0];
	int mini=v[0];
	
	int cnt=0;
	for(int i=1;i<n;i++)
	{
	    if(v[i]>maxi)
	    {
	        cnt++;
	        maxi=v[i];
	    }else if(v[i]<mini)
	    {
	        cnt++;
	        mini=v[i];
	    }
	}
	
	cout<<cnt<<endl;
	return 0;
}
