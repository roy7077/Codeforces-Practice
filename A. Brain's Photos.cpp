#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	
	unordered_map<char,int> map;
	map['C']=1;
	map['M']=1;
	map['Y']=1;
	
	bool flag=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        char input;
	        cin>>input;
	        
	        if(map.count(input))
	        flag=1;
	    }
	}
	
	if(flag)
	cout<<"#Color"<<endl;
	else
	cout<<"#Black&White"<<endl;
	
	return 0;
}
