#include <iostream>
#include <vector>
using namespace std;

void seive(vector<int>& v)
{
    int n=1000;
    v[0]=0;
    v[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(v[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            v[j]=0;
        }
    }
}
int main() 
{
	vector<int> v(1001,1);
	seive(v);
	
	int n,m;
	cin>>n>>m;
	
	int i=n+1;
	while(1)
	{
	    if(v[i]==1)
	    {
	        if(i==m)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        
	        break;
	    }
	    i++;
	}
	return 0;
}

//time _Complexity - O(1000)
