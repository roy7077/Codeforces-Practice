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
    	
    	vector<vector<char>> v(2,vector<char>(n));
    	for(int i=0;i<2;i++)
    	{
    	    for(int j=0;j<n;j++)
    	    cin>>v[i][j];
    	}
    	
    	bool flag=true;
    	for(int i=0;i<n;i++)
    	{
    	    if((v[0][i]==v[1][i]) or (v[0][i]=='B' and v[1][i]=='G') or (v[0][i]=='G' and v[1][i]=='B'))
    	    continue;
    	    else
    	    {
    	        flag=0;
    	        break;
    	    }
    	}
    	
    	if(flag)
    	cout<<"Yes"<<endl;
    	else
    	cout<<"No"<<endl;
    }
	
	return 0;
}

// time _Complexity - O( t * 2*n )