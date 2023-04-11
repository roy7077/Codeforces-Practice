#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int max1=max((3*a)/10,a-((a/250)*c));
	int max2=max((3*b)/10,b-((b/250)*d));
	
	if(max1>max2)
	cout<<"Misha"<<endl;
	else if(max2>max1)
	cout<<"Vasya"<<endl;
	else
	cout<<"Tie"<<endl;
	return 0;
}

// time _Complexity - O(1)