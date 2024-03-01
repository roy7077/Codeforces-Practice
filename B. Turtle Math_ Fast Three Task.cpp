// Time complexity - O(T*N)
// Space complexity- O(N)
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    int sum=0;
	    for(auto &i:v)
	    {
	        cin>>i;
	        sum+=i;
	    }
	    
	    int need=(3-(sum%3))%3;
	    int one=0;
	    int two=0;
	    for(auto it:v)
	    {
	        if(it%3==1)
	        one++;
	        else if(it%3==2)
	        two++;
	    }
	    
	    if(sum%3==1 and one)
	    need=min(need,1);
	    else if(sum%3==2 and two)
	    need=min(need,1);
	    
	    cout<<need<<endl;
	}
	return 0;
}
