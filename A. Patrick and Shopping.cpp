#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int a,b,c;
	cin>>a>>b>>c;
	
	int d1=min(a,b);
	int d2=min(a+b,c);
	
	int d3=min(max(a,b),c+d1);
	
	cout<<d1+d2+d3<<endl;
	return 0;
}

// time _Complexity - O(1)