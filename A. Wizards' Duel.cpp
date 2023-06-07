#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double l,v1,v2;
	cin>>l>>v1>>v2;
	
	double ans=((double)(v1*l))/(v1+v2);
	cout<<ans<<endl;

	return 0;
}

// time _Complexity - O(1)
// space _Complexity - O(1)