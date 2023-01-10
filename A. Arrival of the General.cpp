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
	
	int count=0;
	int max_ind=0;
	int min_ind=0;
	int maxi=v[0];
	int mini=v[0];
	
	//finding max element
	for(int i=0;i<n;i++)
	{
	    if(v[i]>maxi)
	    {
	        maxi=v[i];
	        max_ind=i;
	    }
	}
	
	if(max_ind!=0)
	{
	    //seting max to first index
	    for(int i=max_ind;i>0;i--)
	    {
	        count++;
	        swap(v[i],v[i-1]);
	    }
	}
	
	//finding min index
	for(int i=0;i<n;i++)
	{
	    if(v[i]<=mini)
	    {
	        mini=v[i];
	        min_ind=i;
	    }
	}
	
	if(min_ind!=n-1)
	{
	    //seting min element to last index
	    for(int i=min_ind;i<n-1;i++)
	    {
	        count++;
	        swap(v[i],v[i+1]);
	    }
	}
	
	cout<<count<<endl;
	return 0;
}
