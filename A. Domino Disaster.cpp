#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        for(auto it:s)
        {
            if(it=='L')
            cout<<"L";
            else if(it=='R')
            cout<<"R";
            else if(it=='U')
            cout<<"D";
            else
            cout<<"U";
        }
        
        cout<<endl;
    }
}

// time _Complexity - O(t*n)