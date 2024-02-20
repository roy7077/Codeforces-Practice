#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    //input
	    vector<vector<char>> v(n,vector<char>(n));
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        cin>>v[i][j];
	    }
	    
	    vector<int> store;
	    for(auto it:v)
	    {
	        int cnt=0;
	        for(auto x:it)
	        {
	            if(x=='1')
	            cnt++;
	        }
	        if(cnt)
	        store.push_back(cnt);
	    }
	    
	    //check of the square
	    bool square=1;
	    for(int i=1;i<store.size();i++)
	    {
	        if(store[i]!=store[i-1])
	        {
	            square=0;
	            break;
	        }
	    }
	    
	    if(square)
	    cout<<"SQUARE"<<endl;
	    else
	    cout<<"TRIANGLE"<<endl;
	}
	return 0;
}