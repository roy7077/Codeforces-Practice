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
	    
	    vector<int> v;
	    
	    while(n--)
	    {
	        int a;
	        cin>>a;
	        v.push_back(a);
	    }
	    
	    for(int i=0;i<v.size();i++)
	    {
	        int x;
	        cin>>x;
	        while(x--)
	        {
	            char ch;
	            cin>>ch;
	            
	            if(ch=='U')
	            {
	                if(v[i]==0)
	                v[i]=9;
	                else
	                v[i]--;
	            }
	            else
	            {
	                if(v[i]==9)
	                v[i]=0;
	                else
	                v[i]++;
	            }
	        }
	    }
	    
	    //printing output
	    for(auto it:v)
	    cout<<it<<" ";
	    cout<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n*x)