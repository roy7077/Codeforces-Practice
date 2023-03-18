#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n,d;
	cin>>n>>d;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	
	int time1=v[0];
	for(int i=1;i<n;i++)
	{
	    time1+=10;
	    time1+=v[i];
	}
	
	if(time1>d)
	{
	    cout<<"-1"<<endl;
	    return 0;
	}
	
	cout<<((n-1)*2)+((d-time1)/5)<<endl;
	return 0;
}

// time _Complexity - O(t*n)