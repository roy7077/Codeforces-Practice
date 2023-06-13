
#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;

    string s;
    cin>>s;
    
    int x=0;
    int y=0;
    
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        char it=s[i];
        
        if(it=='R')
        x++;
        else
        y++;
        
        if(x==y)
        {
            if(it=='R' and s[i+1]=='R')
            cnt++;
            else if(it=='U' and s[i+1]=='U')
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
	return 0;
}

// time _Complexity -  O(N)
// space _Complexity - O(1)