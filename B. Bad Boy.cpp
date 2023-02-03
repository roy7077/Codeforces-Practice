#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,x,y;
	    cin>>n>>m>>x>>y;
	    
	   if((x==1 and y==1) or (x==n and y==m))
	   cout<<n<<" "<<"1"<<" "<<"1"<<" "<<m<<endl;
	   else
	   cout<<"1 1"<<" "<<n<<" "<<m<<endl;
	}
	return 0;
}

//time _Complexity - O(t)