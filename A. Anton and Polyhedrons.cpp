#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	//stored the faces for each polyhedrons in unordered_map
	unordered_map<string,int> map;
	map["Tetrahedron"]=4;
	map["Cube"]=6;
	map["Octahedron"]=8;
	map["Dodecahedron"]=12;
	map["Icosahedron"]=20;
	
	long long cnt=0;
	while(n--)
	{
	    string s;
	    cin>>s;
	    
	    cnt+=map[s];
	}
	
	cout<<cnt<<endl;
	return 0;
}
