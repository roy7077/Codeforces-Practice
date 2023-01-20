#include <iostream>
using namespace std;
#define ll long long

int main() {
	
	ll n;
	cin>>n;
	
	if(n>0)
	{
	    cout<<n<<endl;
	    return 0;
	}
	
	
	int last=(-1*n)%10;
	n/=10;
	
	if(n==0)
	{
	    cout<<"0"<<endl;
	    return 0;
	}
	int second=(-1*n)%10;
	n/=10;
	
	n=n*-1;
	if((n*10)+last<(n*10)+second)
	cout<<-((n*10)+last)<<endl;
	else
	cout<<-((n*10)+second)<<endl;
	
	
	return 0;
}
