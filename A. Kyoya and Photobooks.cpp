#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    
    int l=s.length();
    cout<<26*(l+1)-l<<endl;
	return 0;
}

// time _Complexity - O(1)
// space _Complexity - O(1)
