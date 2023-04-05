#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	int mini=-1;
	int sum=0;
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    if(mini==-1)
	    mini=b;
	    
	    mini=min(mini,b);
	    sum+=mini*a;
	}
	
	cout<<sum<<endl;
	return 0;
}

// time _Complexity - O(n)
