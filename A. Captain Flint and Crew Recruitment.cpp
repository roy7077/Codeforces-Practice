#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    if(n<31)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    int a,b,c,d;
	    a=14;
	    b=10;
	    c=6;
	    d=n-(a+b+c);
	    if(d==14 or d==6 or d==10)
	    {
	        b+=5;
	        d-=5;
	    }
	    
	    cout<<"YES"<<endl;
	    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	}
	return 0;
}

// time _Complexity - O(t)