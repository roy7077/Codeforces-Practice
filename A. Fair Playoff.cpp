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
        vector<int> v(4);
        int first=0;
        int second=0;
        for(int i=0;i<4;i++)
        {
            cin>>v[i];
            if(v[i]>first)
            {
                second=first;
                first=v[i];
            }
            else if(v[i]>second)
            second=v[i];
        }
        
        
        int a=max(v[0],v[1]);
        int b=max(v[2],v[3]);
        
        if((a+b)==(first+second))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        
    }
	return 0;
}

//time _Complexity - O(t*4)