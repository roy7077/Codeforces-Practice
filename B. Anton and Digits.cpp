#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	ll sum=0;
	while(1)
	{
	    if((a==0 or c==0 or d==0) and (b==0 or a==0) )
	    break;
	    
	    if(a!=0 and c!=0 and d!=0)
	    {
	        sum+=256;
	        a--;
	        c--;
	        d--;
	    }
	    else if(b!=0 and a!=0)
	    {
	        sum+=32;
	        a--;
	        b--;
	    }
	}
	
	cout<<sum<<endl;
	
	
	return 0;
}

// time _Complexity O(max(min{a,c,d},min(a,b)))
