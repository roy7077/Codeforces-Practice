#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(auto& i:v)
	    cin>>i;
	    
	    sort(v.begin(),v.end());
	    int i=v[0];
	    int j=v[n-1];
	    int k=v[1];
	    int l=v[n-2];
	    int sum=0;
	    
	    sum=abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
	    cout<<sum<<endl;
	}
	return 0;
}
