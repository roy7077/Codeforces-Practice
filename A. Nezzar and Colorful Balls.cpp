#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;

	    vector<int> ans(n);
	    int pre=-1;
	    int num=-1;
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        
	        if(input!=pre)
	        {
	            num=1;
	            pre=input;
	            ans[i]=num;
	            num++;
	        }
	        else
	        {
	            ans[i]=num;
	            num++;
	            pre=input;
	        }
	    }
	    
	    sort(ans.begin(),ans.end());
	    int count=1;
	    pre=ans[0];
	    for(int i=1;i<n;i++)
	    {
	        if(ans[i]!=pre)
	        {
	            count++;
	            pre=ans[i];
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

// time _Complexity - O(t*nlogn)