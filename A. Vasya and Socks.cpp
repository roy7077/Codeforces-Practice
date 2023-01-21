#include <iostream>
using namespace std;

int main() {
	
	//taking n and m input
	int n,m;
	cin>>n>>m;
	
	int day=0;
	while(n>0)
	{
	    day++;
	    n--;
	    
	    if(day%m==0)
	    n++;
	}
	
	cout<<day<<endl;
	return 0;
}
