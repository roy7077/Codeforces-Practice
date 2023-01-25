#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n,m;
	    cin>>x>>n>>m;
	    
	    bool flag=0;
	    
	    //do n untill x>20 and n>0
	    while(x>20 and n>0)
	    {
	        x=(x/2)+10;
	        n--;
	    }
	    
	    //if x>0 and m>0 
	    while(x>0 and m>0)
	    {
	        x=x-10;
	        m--;
	        if(x<=0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n*m)