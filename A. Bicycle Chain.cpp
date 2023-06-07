#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int m;
	cin>>m;
	vector<int> b(m);
	for(int i=0;i<m;i++)
	cin>>b[i];
	
	int maxi=0;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        if(b[j]%a[i]==0)
	        {
	            if((b[j]/a[i])>maxi)
	            {
	                maxi=b[j]/a[i];
	                cnt=1;
	            }
	            else if((b[j]/a[i])==maxi)
	            cnt++;
	        }
	    }
	}
	
	cout<<cnt<<endl;
	return 0;
}

// time _Complexity - O(n*m)
// space _Complexity - O(n+m)