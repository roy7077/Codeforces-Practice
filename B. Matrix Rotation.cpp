#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    vector<vector<int>> v(2,vector<int>(2));
	    for(int i=0;i<2;i++)
	    {
	        for(int j=0;j<2;j++)
	        cin>>v[i][j];
	    }
	    
	   // 1 2
	   // 3 4
	    
	    int n=5;
	    bool flag=0;
	    while(n--)
	    {
	        if(v[0][0]<v[1][0] and v[0][1]<v[1][1] and v[0][0]<v[0][1] and v[1][0]<v[1][1])
	        {
	            flag=1;
	            break;
	        }
	        
	        int a=v[0][0];
	        int b=v[0][1];
	        int c=v[1][1];
	        int d=v[1][0];
	        
	        v[0][0]=d;
	        v[0][1]=a;
	        v[1][1]=b;
	        v[1][0]=c;
	        n--;
	        
	       // for(auto it:v)
	       // {
	       //     for(auto x:it)
	       //     cout<<x<<" ";
	       //     cout<<endl;
	       // }
	       // cout<<endl;
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*2*2)
