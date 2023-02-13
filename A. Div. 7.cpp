#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    //if n is divisible by 7
	    //no need to change n
	    if(n%7==0)
	    {
	        cout<<n<<endl;
	        continue;
	    }
	    
	    //change digit
	    for(int i=0;i<10;i++)
	    {
	        int num=((n/10)*10)+i;
	        if(num%7==0)
	        {
	            cout<<num<<endl;
	            break;
	        }
	    }
	    
	}
	return 0;
}

// time _Complexity - o(t*10)
