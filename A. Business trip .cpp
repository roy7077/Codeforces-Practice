#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//comparator
bool cmp(int a,int b)
{
    return a>b;
}

int main() {
	
	int k;
	cin>>k;
	
	vector<int> v(12);
	for(int i=0;i<12;i++)
	cin>>v[i];
	
	sort(v.begin(),v.end(),cmp);
	int count=0;
	int sum=0;
	for(int i=0;i<12;i++)
	{
	    if(sum>=k)
	    break;
	    
	    count++;
	    sum+=v[i];
	    
	}
	
	if(sum<k)
	{
	    cout<<"-1"<<endl;
	    return 0;
	}
	cout<<count<<endl;
	return 0;
}

//time _Complexity - O( t * 12 * nlogn)
