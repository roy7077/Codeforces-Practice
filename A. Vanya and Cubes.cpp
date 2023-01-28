#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& v)
{
    int pos=0;
    int level=0;
    int pre=0;
    
    while(pos<=1000005)
    {
        v[pos]=level;
        level++;
        int box=pre+level;
        pre=box;
        
        pos+=box;
    }
    
    
    int fill=0;
    for(int i=0;i<=1000005;i++)
    {
        if(v[i]==0)
        v[i]=fill;
        else
        {
            fill=v[i];
        }
        
    }
}
int main() 
{
	vector<int> v(1000005,0);
	solve(v);
	
// 	for(int i=0;i<=25;i++)
// 	cout<<i<<" -> "<<v[i]<<endl;
	
	int n;
	cin>>n;
	
	cout<<v[n]<<endl;
	return 0;
}

// time _Complexity - O(10^5)
