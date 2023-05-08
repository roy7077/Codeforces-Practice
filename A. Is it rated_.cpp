#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    pair<int,int> pre({1e9,1e9});
    pair<int,int> curr({1e9,1e9});
    bool flag1=1;
    bool flag2=1;
    while(t--)
    {
        pre=curr;
        cin>>curr.first>>curr.second;
        if(curr.first!=curr.second)
        flag1=0;
        
        if(curr.first>pre.first and curr.second>pre.second)
        flag2=0;
    }
    
    if(flag1==0)
    cout<<"rated"<<endl;
    else if(flag1 and flag2)
    cout<<"maybe"<<endl;
    else
    cout<<"unrated"<<endl;
  	return 0;
}

// time _Complexity - O(t)
// space _Complexity- O(1)