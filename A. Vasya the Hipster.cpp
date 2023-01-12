#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int a,b;
	cin>>a>>b;
	
	//min(a,b) is pair of different colour socks
	//(max(a,b)-min(a,b))/2 is a number of days he has to were socks of same colour
	cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2<<endl;
	return 0;
}
