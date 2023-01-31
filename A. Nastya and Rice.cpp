#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,c,d;
	    cin>>n>>a>>b>>c>>d;
	    
	    int lower=c-d;
	    int upper=c+d;
	    
	    int range1=(a-b)*n;
	    int range2=(a+b)*n;
	    
	    
	    if(range1>=lower or range2<=upper)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    if(range1>upper or range2<lower)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	   
	   /*
	   bool flag=0;
	   for(int i=range1;i<=range2;i++)
	   {
	       if(i>=lower and i<=upper)
	       {
	           cout<<"Yes"<<endl;
	           flag=1;
	           break;
	       }
	   }
	   
	   if(!flag)
	   cout<<"No"<<endl;
	   */
	   
	    
	}
	return 0;
}

//time _Complexity O(t)
