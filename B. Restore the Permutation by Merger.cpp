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
	    
	    unordered_map<int,int> map;
	    for(int i=0;i<(2*n);i++)
	    {
	        int a;
	        cin>>a;
	        
	        if(!map.count(a))
	        cout<<a<<" ";
	        
	        map[a]++;
	    }
	    cout<<endl;
	}
	return 0;
}
