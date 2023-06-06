#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n,m;
    cin>>n>>m;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    int cnt=0;
    int carry=0;
    for(auto it:v)
    {
        if(m<=0)
        break;
        
        carry+=it;
        if(carry>=8)
        {
            m-=8;
            carry-=8;
        }
        else
        {
            m-=carry;
            carry=0;
        }
        
        cnt++;
    }
    
    if(m>=1)
    cout<<"-1"<<endl;
    else
    cout<<cnt<<endl;
    
	return 0;
}

// time _Complexity - O(N)
// space _Complexity - O(N)
