#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    int i=0;
	    int j=n-1;
	    
	    int count=0;
	    while(i<=j)
	    {
	        if(str[i]!=str[j])
	        {
	            count+=2;
	            i++;
	            j--;
	        }
	        else
	        break;
	    }
	    
	    cout<<n-count<<endl;
	}
	return 0;
}

// time _Complexity - O(t*n)
