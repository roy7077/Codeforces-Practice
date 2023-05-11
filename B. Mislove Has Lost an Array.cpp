#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n,l,r;
	cin>>n>>l>>r;
	
	int min_sum=0;
	int max_sum=0;
	
	//minimum
	int cnt=0;
	int even=2;
	for(int i=1;i<=n;i++)
	{
	    if(i==1)
	    {
	        min_sum+=1;
	        cnt++;
	    }
	    else
	    {
	        if(cnt<l)
	        {
	            min_sum+=even;
	            even*=2;
	            cnt++;
	        }
	        else
	        min_sum++;
	    }
	    
	    
	}
	
	//maximum
	//minimum
	cnt=0;
	even=2;
	for(int i=1;i<=n;i++)
	{
	    if(i==1)
	    {
	        max_sum+=1;
	        cnt++;
	    }
	    else
	    {
	        if(cnt<r)
	        {
	            max_sum+=even;
	            even*=2;
	            cnt++;
	        }
	        else
	        max_sum+=even/2;
	    }
	    
	}
	
	cout<<min_sum<<" "<<max_sum<<endl;
	return 0;
}
