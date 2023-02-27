#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(4);
	    unordered_map<int,int> map;
	    cin>>v[1]>>v[2]>>v[3];
	    
	    bool flag=1;
	    while(1)
	    {
	        map[n]++;
	        if(map.size()==3)
	        {
	            break;
	        }
	        int a=v[n];
	        if(a==0)
	        {
	            flag=0;
	            break;
	        }
	        n=a;
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

// time _Complexity - O(t*3)