#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;

int main() 
{
    int n,m;
    cin>>n>>m;
    
    unordered_map<string,string> mp;
    while(n--)
    {
        string name,ip;
        cin>>name>>ip;
        
        ip+=';';
        mp[ip]=name;
    }
    
    while(m--)
    {
        string name,ip;
        cin>>name>>ip;
        
        cout<<name<<" "<<ip<<" #"<<mp[ip]<<endl;
    }
	return 0;
}

// time _Complexity - O(N+M)
// space _Complexity - O(N)

