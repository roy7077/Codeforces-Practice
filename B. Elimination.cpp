#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        cout<<max(a+b,c+d)<<endl;
    }
	
	return 0;
}

// time _Complexity - O(T)