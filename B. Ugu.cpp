#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string v;
	    cin>>v;
	    
	    int is_one=0;
	    int cnt=0;
	    int op=0;
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]=='0' and is_one==0)
	        continue;
	        else if(v[i]=='0' and is_one)
	        {
	            if(cnt%2==0)
	            {
	                cnt++;
	                op++;
	            }
	        }
	        else 
	        {
	            if(cnt%2)
	            {
	                is_one=1;
	                cnt++;
	                op++;
	            }
	            
	            is_one=1;
	        }
	        
	    }
	    
	    cout<<op<<endl;
	}
	return 0;
}

// time _Complexity - O(N)
// space _Complexity - O(N)
