#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	
	vector<vector<char>> v(n,vector<char>(m,'.'));
	
	//making the snake
	bool a=0;
	for(int i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
	        for(int j=0;j<m;j++)
	        v[i][j]='#';
	    }else
	    {
	        if(!a)
	        {
	            v[i][m-1]='#';
	            a=(!a);
	        }else
	        {
	            v[i][0]='#';
	            a=(!a);
	        }
	        
	    }
	}
	
	//printing the snake
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    cout<<v[i][j];
	    cout<<endl;
	}
	return 0;
}
