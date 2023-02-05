#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    cout<<b<<" "<<c<<" "<<c<<endl;
	}
	return 0;
}

// time _Complexity - o(t)
/* here in this question given that area
   of triangle is greater than zero 
   
   conditions for area of triangle greater
   than zero is 
   
   if sides of triangle are x,y and z
   
   x+y>=z 
   x+z>=y
   y+z>=x 
*/