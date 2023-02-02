#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;

/*-------------------------------Method-1----------------------------------*/
	    int cnt_a=0;
	    int cnt_b=0;
	    int cnt_c=0;
	    
	    for(auto it:s)
	    {
	        if(it=='A')
	        cnt_a++;
	        else if(it=='B')
	        cnt_b++;
	        else
	        cnt_c++;
	    }
	    
	    if(cnt_b==(cnt_a+cnt_c))
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;

	    
/*----------------------Method-2-------------------------------------*/
	   
	   // int n=s.length();
	   // unordered_map<int,bool> map;
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(map[i])
	   //     continue;
	        
	   //     for(int j=i+1;j<n;j++)
	   //     {
	   //        // if(map[j])
	   //        // continue;
	   //         if(s[i]=='A' and s[j]=='B' and !(map[j]))
	   //         {
	   //             //cout<<i<<" "<<j<<" ";
	   //             map[i]=true;
	   //             map[j]=true;
	   //             break;
	   //         }
	   //         else if(s[i]=='B' and s[j]=='A' and !(map[j]))
	   //         {
	   //             //cout<<i<<" "<<j<<" ";
	   //             map[i]=true;
	   //             map[j]=true;
	   //             break;
	   //         }
	   //         else if(s[i]=='B' and s[j]=='C' and !(map[j]))
	   //         {
	   //             //cout<<i<<" "<<j<<" ";
	   //             map[i]=true;
	   //             map[j]=true;
	   //             break;
	   //         }
	   //         else if(s[i]=='C' and s[j]=='B' and !(map[j]))
	   //         {
	   //             //cout<<i<<" "<<j<<" ";
	   //             map[i]=true;
	   //             map[j]=true;
	   //             break;
	   //         }
	   //     }
	   // }
	    
	   // int cnt=0;
	   // for(auto it:map)
	   // {
	   //     if(it.second)
	   //     cnt++;
	   // }
	    
	   // if(cnt==n)
	   // cout<<"Yes"<<endl;
	   // else
	   // cout<<"No"<<endl;
	   //// cout<<endl;
	   //// for(auto it:map)
	   //// cout<<it.first<<endl;
	    
	   //// if(map.size()!=n)
	   //// cout<<"No"<<endl;
	   //// else
	   //// cout<<"Yes"<<endl;
	}
	return 0;
}

