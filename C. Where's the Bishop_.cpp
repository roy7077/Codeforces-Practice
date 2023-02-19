#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    vector<vector<char>> v(8,vector<char>(8));
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        cin>>v[i][j];
	    }
	    
	    bool flag=0;
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            if(i>=2 and j<=7 and j>=2 and j<=7)
	            {
	                if(v[i-1][j-1]=='#' and v[i-1][j+1]=='#' and v[i+1][j+1]=='#' and v[i+1][j-1]=='#')
	                {
	                    cout<<i<<" "<<j<<endl;
	                    flag=1;
	                    break;
	                }
	            }
	        }
	        if(flag)
	        break;
	    }
	}
	return 0;
}

//time _Complexity - O(t*(8*8)
