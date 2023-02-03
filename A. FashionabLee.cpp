#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    if(n%4==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}

//time _Complexity - o(t)
/* 
   _____
  |    |
  |____|
  
  if polygon has 4 side then it has sides parallel to y and x axis
  if polygon had 3,5,6,7,9,10 then it dont have sides parllel to x and y axis
  
  if total number of sides are divisible by 4 then it is Yes
*/
  
  
  
  
  