#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    
    bool is_hard=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
        is_hard=1;
    }
    
    if(is_hard)
    cout<<"HARD"<<endl;
    else
    cout<<"EASY"<<endl;
}