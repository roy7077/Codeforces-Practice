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
	    for(int i=0;i<3;i++)
	    cin>>v[i];
	    
	    int cnt=0;
	    
	    //consider one by one
	    if(v[0]>=1)
	    cnt++;
	    
	    if(v[1]>=1)
	    cnt++;
	    
	    if(v[2]>=1)
	    cnt++;
	    
	    v[0]--;
	    v[1]--;
	    v[2]--;
	    
	    //pairing
	    //1st and 2nd
	    sort(v.begin(),v.end(),greater<int>());
	    if(v[0]>=1 and v[1]>=1)
	    {
	        cnt++;
	        v[0]--;
	        v[1]--;
	    }
	    
	    //2nd and 3rd
	    if(v[0]>=1 and v[2]>=1)
	    {
	        cnt++;
	        v[0]--;
	        v[2]--;
	    }
	    
	    //1st and 3rd
	    if(v[1]>=1 and v[2]>=1)
	    {
	        cnt++;
	        v[1]--;
	        v[2]--;
	    }
	    
	    //1st , 2nd ,3rd consider all
	    if(v[0]>=1 and v[1]>=1 and v[2]>=1)
	    cnt++;
	
	
	    cout<<cnt<<endl;
	}
	return 0;
}

//time _Complexity - O(t)
