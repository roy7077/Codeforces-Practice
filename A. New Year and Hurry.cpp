#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n,k;
	cin>>n>>k;
	
	int time1=0;
	for(int i=1;i<=n;i++)
	{
	    time1+=i*5;
	    
	    //if time taken to solve the problem is greater than 240-k then
	    //cout<<i-1  that is the number of problem he can solve
	    if(time1>(240-k))
	    {
	        cout<<i-1<<endl;
	        return 0;
	    }
	}
	
	cout<<n<<endl;
	return 0;
}
