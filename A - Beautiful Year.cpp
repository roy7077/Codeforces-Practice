#include <iostream>
#include <unordered_map>
using namespace std;

bool uniqe(int n)
{
    unordered_map<int,int> mp;
    while(n)
    {
        if(mp.count(n%10)==1)
        return false;
        
        mp[n%10]++;
        n/=10;
    }
    
    return true;
}
int main() {
	
	    int x;
	    cin>>x;
	    
	    x++;
	    while(1)
	    {
	        if(uniqe(x))
	        {
	            //flag=1;
	            break;
	        }
	        
	        x++;
	    }
	    
	    cout<<x<<endl;
	    
	
	return 0;
}