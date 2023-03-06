#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int a,b,n;
	cin>>a>>b>>n;
	
	bool flag=1;
	while(1)
	{
	   if(flag)
	   {
	       int gcd=__gcd(a,n);
	       n-=gcd;
	       if(n<0)
	       break;
	       else
	       flag=(!flag);
	   }
	   else
	   {
	       int gcd=__gcd(b,n);
	       n-=gcd;
	       if(n<0)
	       break;
	       else
	       flag=(!flag);
	   }
	}
	
	if(flag)
	cout<<"1"<<endl;
	else
	cout<<"0"<<endl;
	return 0;
}

