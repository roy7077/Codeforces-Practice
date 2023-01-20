#include <iostream>
using namespace std;

int main() {
	
	int n,m;
	cin>>n>>m;
	
	bool flag=1;
    int i=n;
    int j=m;
	while(i>0 and j>0)
	{
	    if(flag)
	    {
	        i--;
	        j--;
	        flag=(!flag);
	    }
	    else
	    {
	        i--;
	        j--;
	        flag=(!flag);
	    }
	}
	
	if(flag)
	cout<<"Malvika"<<endl;
	else
	cout<<"Akshat"<<endl;
	return 0;
}
