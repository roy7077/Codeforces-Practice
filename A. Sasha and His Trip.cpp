#include <iostream>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	
	if(n==(k+1))
	cout<<k<<endl;
	else if(n==k)
	cout<<k-1<<endl;
	else if(n<k)
	cout<<n-1<<endl;
	else
	{
	    int ans;
	    ans+=k;
	    int d;
	    d+=n-1-k;
	    int i=1;
	    while(d--)
	    {
	        i++;
	        ans+=i;
	    }
	    cout<<ans<<endl;
	}
	
// 	int money=0;
// 	int balance=0;
// 	for(int i=1;i<n;i++)
// 	{
// 	    if(balance<n-i)
// 	    {
// 	        if(n-i-balance<=v)
// 	        {
// 	           // cout<<"1st-> i -> "<<i<<endl;
// 	           // cout<<n-i-balance<<endl;
// 	            money+=(n-i-balance)*i;
// 	            balance+=n-i-balance;
// 	            //cout<<(n-i-balance)*i<<endl;
// 	            cout<<"1st -> "<<i<<endl;
// 	            cout<<"money -> "<<money<<endl;
// 	            cout<<"balance -> "<<balance<<endl;
// 	        }
// 	        else
// 	        {
// 	            //cout<<"2nd-> i -> "<<i<<endl;
// 	            balance+=v;
// 	            money+=v*i;
// 	            //cout<<money<<endl;
// 	            cout<<"2nd -> "<<i<<endl;
// 	            cout<<"money -> "<<money<<endl;
// 	            cout<<"balance -> "<<balance<<endl;
// 	        }
// 	    }
// 	    balance--;
// 	}
// 	cout<<money<<endl;
	return 0;
}
