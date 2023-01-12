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
	
	int police=0;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
	    //if v[i]>0 and police is also there then crime will be treated
	    if(v[i]==-1 and police==0)
	    cnt++;
	    else if(v[i]==-1 and police>0)
	    police--;
	    else
	    police+=v[i];
	}
	
	cout<<cnt<<endl;
	return 0;
}
