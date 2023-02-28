#include <iostream>
#include <vector>
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
    	int sum=0;
    	for(int i=0;i<n;i++)
    	{
    	    cin>>v[i];
    	    sum+=v[i];
    	}
    	
    	//check is answer possible or not
    	if(sum%n!=0)
    	{
    	    cout<<"-1"<<endl;
    	    continue;
    	}
    	int cnt=0;
    	int req=sum/n;
    	for(auto it:v)
    	{
    	    if(it>req)
    	    cnt++;
    	}
    	
    	cout<<cnt<<endl;
    }
	
	return 0;
}

// time _Complexity - O(t*n)