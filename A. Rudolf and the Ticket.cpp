#include <vector>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    vector<int> a(n);
	    vector<int> b(m);
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<m;i++)
	    cin>>b[i];
	    
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if((a[i]+b[j])<=k)
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
