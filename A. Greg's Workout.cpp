#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;

	int a,b,c;
	a=b=c=0;
	
	int flag=1;
	for(int i=0;i<n;i++)
	{
	    int input;
	    cin>>input;
	    if(flag==1)
	    {
	        a+=input;
	        flag++;
	    }
	    else if(flag==2)
	    {
	        b+=input;
	        flag++;
	    }
	    else
	    {
	        c+=input;
	        flag=1;
	    }
	}
	
	if(a>b and a>c)
	cout<<"chest"<<endl;
	else if(b>a and b>c)
	cout<<"biceps"<<endl;
	else
	cout<<"back"<<endl;
	
	return 0;
}

// time _Complexity - O(n)