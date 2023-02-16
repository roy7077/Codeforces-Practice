#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int n,m;
	cin>>n>>m;
	
	int count=0;
	int limit=min(n,m);
	for(int a=0;a<=limit;a++)
	{
	    for(int b=0;b<=limit;b++)
	    {
	        if(((a*a)+b)==n and (a+(b*b))==m)
	        count++;
	    }
	}
	
	cout<<count<<endl;
	return 0;
}

//time _Complexity - O(1000)