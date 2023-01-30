#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	int count=0;
	for(int i=1;i<=(n/2);i++)
	{
	    if((n-i)%i==0)
	    count++;
	}
	
	cout<<count<<endl;
	return 0;
}

//time _Complexity - O(n/2)