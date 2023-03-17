#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    sort(v.begin(),v.end(),greater<int>());
	    if(n==1)
	    cout<<v[0]<<endl;
	    else if(n==2)
	    cout<<v[1]<<endl;
	    else
	    cout<<v[2]<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
