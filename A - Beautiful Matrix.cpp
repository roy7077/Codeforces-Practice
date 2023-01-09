#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<vector<int>> v(5,vector<int>(5,0));
    int ind_i=0;
    int ind_j=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>v[i][j];
            if(v[i][j]==1)
            {
                ind_i=i+1;
                ind_j=j+1;
            }
        }
    }
    
    cout<<abs(3-ind_i)+abs(3-ind_j)<<endl;
    
    
}