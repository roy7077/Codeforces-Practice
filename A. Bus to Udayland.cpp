#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	vector<vector<char>> v(n,vector<char>(5));
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<5;j++)
	    cin>>v[i][j];
	}
	
	bool ans=0;
	for(int i=0;i<n;i++)
	{
	    bool flag=0;
	    for(int j=0;j<5;j++)
	    {
	        if(j==0 or j==3)
	        {
	            if(v[i][j]=='O' and v[i][j+1]=='O')
	            {
	                v[i][j]='+';
	                v[i][j+1]='+';
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag)
	    {
	        ans=1;
	        break;
	    }
	    
	}
	if(!ans)
	{
	    cout<<"NO"<<endl;
	    return 0;
	}
	
	cout<<"YES"<<endl;
	for(auto it:v)
	{
	    for(auto x:it)
	    cout<<x;
	    cout<<endl;
	}
	return 0;
}

// time _Complexity - O(t*(n*5)