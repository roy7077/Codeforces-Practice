#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a1=-1;
	    int b1=-1;
	    int a2=-1;
	    int b2=-1;
	    vector<vector<char>> v(n,vector<char>(n));
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>v[i][j];
	            if(v[i][j]=='*')
	            {
	                if(a1==-1)
	                {
	                    a1=i;
	                    b1=j;
	                }
	                else
	                {
	                    a2=i;
	                    b2=j;
	                }
	            }
	        }
	    }
	    
	    //setting values
	    if(a1==a2)
	    {
	        if(a1<n-1)
	        {
	            v[a1+1][b1]='*';
	            v[a2+1][b2]='*';
	        }
	        else
	        {
	            v[a1-1][b1]='*';
	            v[a2-1][b2]='*';
	        }
	    }
	    else if(b1==b2)
	    {
	        if(b1<n-1)
	        {
	            v[a1][b1+1]='*';
	            v[a2][b2+1]='*';
	        }
	        else
	        {
	            v[a1][b1-1]='*';
	            v[a2][b2-1]='*';
	        }
	    }
	    else
	    {
	        v[a1][b2]='*';
	        v[a2][b1]='*';
	    }
	    
	   // cout<<"1st-> "<<a1<<" "<<b1<<endl;
	   // cout<<"2nd-> "<<a2<<" "<<b2<<endl;
	    //printing
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        cout<<v[i][j];
	        cout<<endl;
	    }
	    
	}
	return 0;
}

// time _Complexity - O(t*n*n)
