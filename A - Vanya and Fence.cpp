#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    
    int width=0;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>h)
        width+=2;
        else
        width++;
    }
    
    cout<<width<<endl;
    return 0;
}