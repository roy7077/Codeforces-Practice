#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    //making 2D vector and taking input
	    vector<vector<char>> v(8,vector<char>(8,'.'));
	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        cin>>v[i][j];
	    }
	    
	    //checking for red in rows
	    bool ans=0;
	    for(int i=0;i<8;i++)
	    {
	        bool flag=1;
	        for(int j=0;j<8;j++)
	        {
	            if(v[i][j]!='R')
	            {
	                flag=0;
	                break;
	            }
	        }
	        
	        if(flag)
	        {
	            ans=1;
	            cout<<"R"<<endl;
	            break;
	        }
	    }
	    
	    if(ans)
	    continue;
	    
	    //searching for Blue in column
	    for(int j=0;j<8;j++)
	    {
	        bool flag=1;
	        for(int i=0;i<8;i++)
	        {
	            if(v[i][j]!='B')
	            {
	                flag=0;
	                break;
	            }
	        }
	        
	        if(flag)
	        {

	            cout<<"B"<<endl;
	            break;
	        }
	    }
	}
	return 0;
}

// time _Complexity - o(t*(8*8))