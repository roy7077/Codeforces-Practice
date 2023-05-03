#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	vector<int> v(n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    sum+=v[i];
	}
	
	int cnt=0;
	for(auto it:v)
	{
	    if((sum-it)%2==0)
	    cnt++;
	}
	
	cout<<cnt<<endl;
	return 0;
}
