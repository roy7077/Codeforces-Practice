#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(a<=b and c>b)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	   // if(b!=1 and c!=1)
	   // {
	   //     cout<<"1"<<endl;
	   //     continue;
	   // }
	    
        int for_b= abs(c-b)+abs(c-1);
        int for_a=a-1;
        
        if(for_a<for_b)
        cout<<"1"<<endl;
        else if(for_b<for_a)
        cout<<"2"<<endl;
        else 
        cout<<"3"<<endl;
	    
	    
	   // if(c<b)
	   // {
	   //     int timee=c-b-a;
	   //     if(timee>)
	   // }
	}
	return 0;
}

// time _Complexity - O(t)
