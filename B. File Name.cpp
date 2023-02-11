#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int count=0;
    int x=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='x')
        {
            x++;
            if(x>=3)
            {
                count++;
                x--;
            }
        }
        else
        x=0;
    }
    
    cout<<count<<endl;
	
	return 0;
}

// time _Complexity - o(length of a string)
