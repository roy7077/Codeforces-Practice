#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    unordered_map<int,int> map;

        //taking array input
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        map[v[i]]++;
	    }
	    
	    //finding which element has frequency 1
	    int val=0;
	    for(auto it:map)
	    {
	        if(it.second==1)
	        {
	            val=it.first;
	            break;
	        }
	    }
	    
	    //finding position of that element which has frequency 1
	    int position=0;
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]==val)
	        {
	            position=i+1;
	            break;
	        }
	    }
	    
	    cout<<position<<endl;
	    
	}
	return 0;
}
