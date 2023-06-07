#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	int n;
	cin>>n;
	
	ll sum=0;
	for(int i=0;i<n;i++)
	{
	    int input;
	    cin>>input;
	    sum+=input;
	}
	
	ll first_maxi=0;
	ll second_maxi=0;
	
	for(int i=0;i<n;i++)
	{
	    int input;
	    cin>>input;
	    if(input>first_maxi)
	    {
	        second_maxi=first_maxi;
	        first_maxi=input;
	    }
	    else if(input>second_maxi)
	    second_maxi=input;
	}
	
	if(first_maxi+second_maxi >=sum)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	return 0;
}

// time _Complexity - O(N)
// space _Complexity - O(1)