#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        if(n==2)
        {
            if(s[0]>=s[1])
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        
        cout<<"YES"<<endl;
        cout<<"2"<<endl;
        cout<<s[0]<<" ";
        for(int i=1;i<n;i++)
        cout<<s[i];
        cout<<endl;
    }
}

// time _Complexity - O(t*n)
// space _Complexity - O(1)




// //dp function
// bool dp(string& s,int i,vector<int>& ans,map<int,int>& mp)
// {
//     //base case
//     if(i>=s.length())
//     return true;
    
//     // cout<<i<<endl;
//     // cout<<ans.back()<<endl;
//     //recursive calls
//     //small calculation
    
//     int num=0;
//     for(int j=i;j<s.length();j++)
//     {
//         //cout<<"inside"<<endl;
//         num*=10;
//         num+=s[j]-'0';
        
//         //cout<<num<<endl;
//         bool a=false;
//         if(num>ans.back() and mp[num]==0)
//         {
//             //cout<<"i-> "<<j<<" num-> "<<num<<endl;
//             ans.push_back(num);
//             mp[num]=1;
//             a=dp(s,j+1,ans,mp);
            
//             if(a)
//             return true;
            
//             ans.pop_back();
//             mp[num]=0;
//         }
        
        
//     }
    
//     return false;
// }

// int main() 
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
	    
// 	    string s;
// 	    cin>>s;
	    
// 	    vector<int> ans;
// 	    map<int,int> mp;
// 	    ans.push_back(0);
	    
// 	    bool a=dp(s,0,ans,mp);
	    
// 	    if(!a or ans.size()==1 or ans.size()==2)
// 	    cout<<"NO"<<endl;
// 	    else
// 	    {
// 	        cout<<"YES"<<endl;
// 	        cout<<ans.size()-1<<endl;
// 	        for(int i=1;i<ans.size();i++)
//     	    cout<<ans[i]<<" ";
//     	    cout<<endl;
// 	    }
	    
// 	}
// 	return 0;
// }


