// #include <iostream>
// #include <cstring>
// using namespace std;

// bool solve(string& temp,int index,int index2,int num,string& str,int ch)
// {
    
//     if(ch==0)
//     return true;
    
//     if(index>=temp.length())
//     return false;
    
//     if(index2>=str.length())
//     return false;
    
//     if(num<2)
//     {
//         bool ans1=0;
//         bool ans2=0;
//         if(temp[index]==str[index2])
//         ans1=solve(temp,index+1,index2+1,num+1,str,ch-1);
        
//         ans2=solve(temp,index,index2+1,0,str,ch);
        
//         return ans1 or ans2;
//     }
//     else
//     {
//         return solve(temp,index,index2+1,0,str,ch);
//     }
    
    
// }
// int main() 
// {
//     //number of test case
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    //length of a string
// 	    int n;
// 	    cin>>n;
	    
// 	    //number of queries
// 	    int q;
// 	    cin>>q;
	    
// 	    string str;
// 	    cin>>str;
	    
// 	    while(q--)
// 	    {
// 	        int l,r;
// 	        cin>>l>>r;
	        
// 	        string temp=str.substr(l-1,(r-l+1));
// 	        bool ans=solve(temp,0,0,0,str,r-l+1);
// 	        if(ans)
// 	        cout<<"YES"<<endl;
// 	        else
// 	        cout<<"NO"<<endl;
// 	    }
	    
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll test,n,q,l,r;
    cin>>test;
    while(test--){
        string s;
        cin>>n>>q>>s;
        while(q--){
            bool ok = false;
            cin>>l>>r;
            l--,r--;
            for(ll i=0; i<l; i++){
                if(s[i] == s[l])
                    ok = true;
            }
            for(ll i=r+1; i<n; i++){
                if(s[i] == s[r])
                    ok = true;
            }
            if(ok){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
    }

    return 0;
}
