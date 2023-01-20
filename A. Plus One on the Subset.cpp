#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

//comprator
bool cmp(int a,int b)
{
    return a>b;
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    //sort an array
	    sort(v.begin(),v.end(),cmp);
	    int maxi=v[0];
	    int count=0;
	    int inc=0;
	    for(int i=1;i<n;i++)
	    {
	        if(v[i]+inc<maxi)
	        {
	            count+=maxi-(v[i]+inc);
	            inc+=maxi-(v[i]+inc);
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
