#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	int n,q;
	cin>>n>>q;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	while(q--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    sort(v.begin(),v.end(),greater<int>());
	    int sum=0;
	    int i=x-1;
	    while(y--)
	    {
	        sum+=v[i];
	        i--;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
