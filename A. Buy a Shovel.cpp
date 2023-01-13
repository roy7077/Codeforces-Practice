#include <iostream>
using namespace std;

int main() {
	
	int k,r;
	cin>>k>>r;
	
	int temp=k;
	int i=1;
	while(i)
	{
	    //changing k for each i
	    k=temp*i;
	    if(k%10==0 or k%10==r)
	    {
	        cout<<i<<endl;
	        break;
	    }
	    
	    i++;
	}
	return 0;
}
