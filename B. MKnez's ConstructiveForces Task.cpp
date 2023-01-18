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
	    
	    //if size of an array is odd return No
	    if(n==3)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    cout<<"YES"<<endl;
	    
	    if(n&1)
	    {
	        int num2=-(n/2);
	        int num1=((n/2)-1);
	        for(int i=1;i<=n-1;i+=2)
    	    {
    	        cout<<num1<<" "<<num2<<" ";
    	    }
    	    cout<<num1<<endl;
	    }else
	    {
	        int num1=1;
	        int num2=-1;
	        for(int i=1;i<=n;i+=2)
    	    {
    	        cout<<num1<<" "<<num2<<" ";
    	    }
    	    cout<<endl;
	    }
	    
	}
	return 0;
}
