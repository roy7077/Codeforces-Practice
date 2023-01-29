#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    vector<int> v(3);
	    cin>>v[0]>>v[1]>>v[2]>>n;
	    
	    sort(v.begin(),v.end());
	    int dif=v[2]-v[0];
	    dif+=v[2]-v[1];
	    
	    if(n>=dif)
	    {
	        n-=dif;
	        if(n%3==0)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}

// time _Complexity - O(t)
