#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n,k;
	cin>>n>>k;
	
	vector<int> v(n);
	int cnt=0;
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    
	    //if 5-v[i] is greater than of equal to k 
	    //thats mean it is eligible to take part in team
	    if(5-v[i]>=k)
	    cnt++;
	}
	
	cout<<cnt/3<<endl;
	return 0;
}
