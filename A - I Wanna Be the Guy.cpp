//A. I Wanna Be the Guy

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int x;
    cin>>x;
    vector<int> x_level(x);
    unordered_map<int,int> map;
    for(int i=0;i<x;i++)
    {
        cin>>x_level[i];
        map[x_level[i]]++;
    }
    
    
    int y;
    cin>>y;
    vector<int> y_level(y);
    for(int i=0;i<y;i++)
    {
        cin>>y_level[i];
        map[y_level[i]]++;
    }
    
    bool ispresent=true;
    for(int i=1;i<=n;i++)
    {
        if(map.count(i)==0)
        {
            ispresent=false;
            break;
        }
    }
    
    if(!ispresent)
    cout<<"Oh, my keyboard!"<<endl;
    else
    cout<<"I become the guy."<<endl;

    return 0;
}
