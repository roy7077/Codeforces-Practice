#include <iostream>
#include <cstring>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    
	    ll n;
	    cin>>n;
	    
	    if(n<3 or n&1)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    // minimum
	    n/=2;
	    if(n%3)
	    {
	        int r=n%3;
	        if(r==1)
	        cout<<((n/3)-1)+2<<endl;
	        else if(r==2)
	        cout<<(n/3)+1<<endl;
	    }
	    else
	    cout<<n/3<<" ";
	    
	    // ,maximum
	    cout<<n/2<<endl;
	   // string str;
	   // cin>>str;
	    
	   // bool flag_6=0;
	   // bool flag_4=0;
	    
	   // int sum=0;
	   // for(auto it:str)
	   // sum+=it-'0';
	    
	   // int last=(str[str.length()-1]-'0');
	   // if((last==0 or last==2 or last==4 or last==6 or last==8) and sum%3==0)
	   // flag_6=1;
	    
	   // if(!flag_6)
	   // {
	   //     if(str.length()==1)
	   //     {
	   //         int first=str[0]-'0';
	   //         if(first==4 or first==8)
	   //         flag_4=1;
	   //     }
	   //     else
	   //     {
	   //         int last_2=(str[str.length()-1]-'0')+(str[str.length()-2]-'0');
	   //         if(last_2%4==0)
	   //         flag_4=1;
	   //     }
	   // }
	    
	   // cout<<"flag_4-> "<<flag_4<<" "<<"flag_6-> "<<flag_6<<endl;
	   // if(!flag_4 and !flag_6)
	   // {
	   //     cout<<"-1"<<endl;
	   //     continue;
	   // }
	    
	    
	   // if(flag_6==1)
	   // {
	   //     int r=0;
    // 	    int num=0;
    // 	    for(auto it:str)
    // 	    {
    // 	        if(num)
    // 	        {
    // 	            num*=10;
    // 	            num+=it-'0';
    // 	        }
    // 	        else
    // 	        {
    // 	            num=r*10+it-'0';
    // 	        }
    	        
    	        
    // 	        if(num<6)
    // 	        continue;
    	        
    // 	        r=(num%6);
    // 	        cout<<num/6<<endl;
    // 	        num=0;
    // 	    }
    	    
    // 	    if(r*10+num)
    // 	    cout<<(r*10+num)/6<<endl;
    	    
    // 	    if(!flag_4)
    // 	    cout<<
	   // }
	    
	    
	    //maximum
	    
	}
	return 0;
}