#include <iostream>
#include <map>
#include <cmath>
#include <cstring>
using namespace std;
#define ll long long

int main() 
{
	int n;
	cin>>n;
	
	map<char,int> mp;
	while(n--)
	{
	    string input;
	    cin>>input;
	    
	    mp[input[0]]++;
	}
	
	ll sum=0;
	for(auto it:mp)
	{
	    int a=it.second/2;
	    int b=ceil(double(it.second)/2);
	    
	    sum+=a*(((double)(a-1))/2);
	    sum+=b*(((double)(b-1))/2);
	}
	
	cout<<sum<<endl;
	return 0;
}

// time _Complexity - O(N)
// space _Complexity - O(N)
