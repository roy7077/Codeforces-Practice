#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main()
{
    int k;
    cin>>k;
    
    string s;
    cin>>s;
    
    int z=0;
    int e=0;
    int r=0;
    int o=0;
    int n=0;
    
    for(auto it:s)
    {
        if(it=='z')
        z++;
        else if(it=='e')
        e++;
        else if(it=='r')
        r++;
        else if(it=='o')
        o++;
        else 
        n++;
    }
    
    int min1=min({o,n,e});
    
    e-=min1;
    o-=min1;
    
    int min2=min({z,e,r,o});
    
    for(int i=0;i<min1;i++)
    cout<<"1"<<" ";
    
    for(int i=0;i<min2;i++)
    cout<<"0"<<" ";
    cout<<endl;
    
}
 
// time _Complexity - O(n)