#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	
	int n;
	cin>>n;
	
	int capacity=0;
	int maxi=-1e9;
	for(int i=0;i<n;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    capacity-=a;
	    capacity+=b;
	    
	    maxi=max(capacity,maxi);
	}
	
	cout<<maxi<<endl;
	return 0;
}
