#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	vector<int> home(n),guest(n);
	
	//taking input 
	for(int i=0;i<n;i++)
	{
	    cin>>home[i];
	    cin>>guest[i];
	}
	
	int cnt=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        //if team is same then skip
	        if(i==j)
	        continue;
	        
	        if(home[i]==guest[j])
	        cnt++;
	    }
	}
	
	cout<<cnt<<endl;
	return 0;
}
