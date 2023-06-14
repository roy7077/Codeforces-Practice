#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    
    int n;
    cin>>n;

    int cnt=0;
    bool b[3001] = {false};
    int pfactors[3001] = {0};
    for (int i=2;i<=n;++i)
    {
        if (!b[i])
        {
            for (int j=i+i;j<=n;j+=i)
            {
                b[j]=true;
                pfactors[j]+=1;
            }
        }

        if (pfactors[i] == 2)
        cnt+=1;
    }
    cout<<cnt<<endl;
    return 0;
    
    
    
    
    
    
    
    
    
// 	vector<int> v(3001,-1);
// 	v[1]=0;
// 	for(int i=2;i*i<3001;i++)
// 	{
// 	    if(v[i]==-1)
// 	    {
// 	        for(int j=i+i;j<3001;j+=i)
// 	        {
// 	            if(v[j]==-1)
// 	            v[j]=0;
	            
// 	            v[j]++;
// 	        }
// 	    }
// 	}
	
	
// 	int n;
// 	cin>>n;
	
// 	int cnt=0;
// 	for(int i=2;i<=n;i++)
// 	{
// 	    if(v[i]==2)
// 	    cnt++;
// 	}
	
// 	cout<<cnt<<endl;
	return 0;
}
