#include <iostream>
using namespace std;
#define ll long long
 
int help(int n)
{
    int sum=0;
    while(n)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
 
int main() {
	int t;
	cin>>t;
	ll pre[200001]={0};
	pre[0]=0;
	pre[1]=1;
	for(int i=1;i<200001;i++)
	{
	    int sum=help(i);
	    pre[i]=pre[i-1]+sum;
	}
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    cout<<pre[n]<<endl;
	}
	return 0;
}