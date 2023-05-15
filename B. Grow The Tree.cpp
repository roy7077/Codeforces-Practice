#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() 
{
	int n;
	cin>>n;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	sort(v.begin(),v.end(),greater<int>());
	ll height=0;
	ll width=0;
	
	int i=0;
	int j=n%2==0?n/2:(n/2)+1;
	int limit=n%2==0?n/2:(n/2)+1;
	while(i<limit or j<n)
	{
	    if(i<limit)
	    {
	        width+=v[i];
	        i++;
	    }
	    
	    if(j<n)
	    {
	        height+=v[j];
	        j++;
	    }
	}
	
	cout<<(height*height)+(width*width)<<endl;
// 	cout<<"height -> "<<height<<endl;
// 	cout<<"width -> "<<width<<endl;
	return 0;
}
