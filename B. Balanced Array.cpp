#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> ans;
	    
	    //checking if n/2 is odd then return false
	    if((n/2)%2==1)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    int sum1=0;
	    int sum2=0;
	    //puting even numbers to ans
	    int i=1;
	    int j=1;
	    while(i<=(n/2))
	    {
	        if(j%2==0)
	        {
	            ans.push_back(j);
	            sum1+=j;
	            i++;
	        }
	        j++;
	    }
	    
	    //putting odd numbers to ans
	    i=1;
	    j=1;
	    while(i<=(n/2)-1)
	    {
	        if(j&1)
	        {
	            ans.push_back(j);
	            sum2+=j;
	            i++;
	        }
	        j++;
	    }
	    
	    cout<<"YES"<<endl;
	    for(int i=0;i<ans.size();i++)
	    cout<<ans[i]<<" ";
	    cout<<abs(sum1-sum2)<<endl;
	    
	}
	return 0;
}
