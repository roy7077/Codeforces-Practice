#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//comparator function
bool compare(int a,int b)
{
    return a>b;
}

int main() {
	
	int n;
	cin>>n;
	
	vector<int> v(n);
	int sum1=0;
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	    sum1+=v[i];
	}
	
	//sorting the vector
	sort(v.begin(),v.end(),compare);
	
	/* finding the minimum number of coins need to
	   take so that the sum of taken coins is strictly
	   greater than remaining coins */
	int sum2=0;
	for(int i=0;i<n;i++)
	{
	    sum2+=v[i];
	    sum1-=v[i];
	    if(sum2>sum1)
	    {
	        cout<<i+1<<endl;
	        return 0;
	    }
	}
	
	
	return 0;
}
