#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//comprator
bool cmp(int a,int b)
{
    return a>b;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
    	cin>>n>>k;
    	
    	vector<int> a(n),b(n);
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	
    	for(int i=0;i<n;i++)
    	cin>>b[i];
    	
    	sort(a.begin(),a.end(),cmp);
    	sort(b.begin(),b.end());
    	
    	int i,j;
    	i=j=n-1;
    	
    	while(k>0 and i>=0 and j>=0)
    	{
    	    if(a[i]<b[i])
    	    {
    	        swap(a[i],b[i]);
    	        i--;
    	        j--;
    	        k--;
    	    }
    	    else
    	    break;
    	    
    	}
    	
    	int sum=0;
    	for(auto it:a)
    	sum+=it;
    	
    	cout<<sum<<endl;
	}
	
	return 0;
}
