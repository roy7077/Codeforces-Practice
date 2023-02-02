#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> v(3);
	    cin>>v[0]>>v[1]>>v[2];
	    
	    sort(v.begin(),v.end());
	    if(v[1]!=v[2])
	    cout<<"No"<<endl;
	    else
	    {
	        cout<<"Yes"<<endl;
	        cout<<v[2]<<" "<<v[0]<<" "<<v[0]<<endl;
	    }
	}
	return 0;
}

// time _Complexity - O(t)
