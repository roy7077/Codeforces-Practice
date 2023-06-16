
#include <iostream>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	long long a[n+5],b[n+5],c[n+5];
	cin>>a[1];
	b[1]=0;
	c[1]=0;
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])
		{
			b[i]=b[i-1]+a[i]-a[i-1];
		}
		else
		{
			b[i]=b[i-1];
		}
		if(a[i-1]<a[i])
		{
			c[i]=c[i-1]+a[i-1]-a[i];
		}
		else
		{
			c[i]=c[i-1];
		}
		
	}
	while(m--)
	{
		long long x,y;
		cin>>x>>y;
		if(x<y)
		{
			cout<<b[x]-b[y]<<endl;
		}
		else
		{
			cout<<c[y]-c[x]<<endl;
		}
	}
	return 0;
}
