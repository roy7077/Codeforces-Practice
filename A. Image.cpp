#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    char a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    unordered_map<char,int> map;
	    map[a]++;
	    map[b]++;
	    map[c]++;
	    map[d]++;
	    
	    if(map.size()==1)
	    cout<<"0"<<endl;
	    else if(map.size()==2)
	    cout<<"1"<<endl;
	    else if(map.size()==3)
	    cout<<"2"<<endl;
	    else
	    cout<<"3"<<endl;
	}
	return 0;
}

// time _Complexiy - O(t)