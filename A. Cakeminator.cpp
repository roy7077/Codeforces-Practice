#include <iostream>
#include <vector>
#include <cstring>
#include <set>
using namespace std;

bool is_possible_col(vector<vector<char>>& v,int j)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i][j]=='S')
        return false;
    }
    
    return true;
}
bool is_possible_row(vector<vector<char>>& v,int i)
{
    for(int j=0;j<v[0].size();j++)
    {
        if(v[i][j]=='S')
        return false;
    }
    
    return true;
}
int main() 
{
	int r,c;
	cin>>r>>c;
	
	vector<vector<char>> v(r,vector<char>(c));
	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
	    cin>>v[i][j];
	}
	
	set<pair<int,int>> s;
	
	//for row
	for(int i=0;i<r;i++)
	{
	    if(is_possible_row(v,i))
	    {
	        //cout<<"row->"<<i<<endl;;
	        for(int j=0;j<c;j++)
	        s.insert({i,j});
	    }
	}
	
	//for column
	for(int i=0;i<c;i++)
	{
	    if(is_possible_col(v,i))
	    {
	        //cout<<"col->"<<i<<endl;
	        for(int j=0;j<r;j++)
	        s.insert({j,i});
	    }
	}
	
	cout<<s.size()<<endl;
// 	cout<<endl;
// 	for(auto it:s)
// 	cout<<it.first<<" "<<it.second<<endl;
	return 0;
}

// time _Complexity - O(2*(row*col)