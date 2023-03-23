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
	    int one=0;
	    for(int i=0;i<2;i++)
	    {
	        for(int j=0;j<2;j++)
	        {
	            cin>>v[i][j];
	            if(v[i][j]==1)
	            one++;
	        }
	    }
	    
	   // if((v[0][0]==1 and v[1][1]==1) or (v[0][1]==1 and v[1][0]==1))
	   // {
	   //     cout<<"2"<<endl;
	   //     continue;
	   // }
	    
	    if(one==0)
	    cout<<"0"<<endl;
	    else if(one==4)
	    cout<<"2"<<endl;
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*(2*2))
