#include <iostream>
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
	    
	    unordered_map<int,int> map;
	    while(n--)
	    {
	        int input;
	        cin>>input;
	        
	        map[input]++;
	    }
	    
	    int count=0;
	    for(auto it:map)
	    count+=it.second-1;
	    
	    if(count%2==0)
	    cout<<map.size()<<endl;
	    else
	    cout<<map.size()-1<<endl;
	    
	}
	return 0;
}

// time _Complexity - o(t*n)
