#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    char ch;
	    cin>>ch;
	    
	    if(ch=='c' or ch=='o' or ch=='d' or ch=='e' or ch=='f' or ch=='r' or ch=='s')
	      cout<<"Yes"<<endl;
	      else
	      cout<<"No"<<endl;
	}
	return 0;
}
