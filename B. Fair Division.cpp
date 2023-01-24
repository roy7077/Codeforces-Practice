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
	    
	   // vector<int> v(n);
	    int one_cnt=0;
	    int two_cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        int input;
	        cin>>input;
	        if(input&1)
	        one_cnt++;
	        else
	        two_cnt++;
	    }
	    
	    if(one_cnt%2==0 and two_cnt%2==0)
	    cout<<"YES"<<endl;
	    else if(two_cnt%2==1 and one_cnt%2==0 and one_cnt>=2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}

//time _Complexity - O(t*n)
