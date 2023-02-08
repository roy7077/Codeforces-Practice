#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int n,m,k;
	cin>>n>>m>>k;
	
	int a=min(m,k);
	if(a>=n)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}

// time _Complexity - o(t)