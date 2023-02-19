
// #include <iostream>
// #include <cstring>
// #include <set>
// #include <map>
// #include <unordered_map>
// using namespace std;

// int main() 
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    string s;
// 	    cin>>s;
	    
// 	    int n;
// 	    cin>>n;
	    
// 	    int h=(((s[0]-'0')*10)+(s[1]-'0'))*60;
// 	    int m=((s[3]-'0')*10)+(s[4]-'0');
// 	    map<int,int> st;
	    
// 	    int timee=h+m;
// 	    int count=0;
	    
// 	    while(1)
// 	    {
// 	        cout<<timee<<endl;
// 	        if(st.count(timee))
// 	        {
// 	            break;
// 	        }
	        
// 	        int h=timee/60;
// 	        int m=timee%60;
	        
// 	        int b=h%10;
// 	        int a=h/10;
// 	        int c=m/10;
// 	        int d=m%10;
	        
// 	        if(a==d and b==c)
// 	        {
// 	            count++;
// 	        }
	        
// 	        st[timee]++;
// 	        if(timee+n>1440)
// 	        {
// 	            int k=1440-timee;
// 	            timee=n-k;
// 	        }
// 	        else
// 	        timee+=n;
	      
	        
	        
// 	    }
// 	   // cout<<"xxxx"<<endl;
// 	   // for(auto it:st)
// 	   // cout<<it.first<<" ";
// 	   cout<<count<<endl;
// 	}
// 	return 0;
// }









#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mp make_pair
#define endl '\n'
 
const int N=2e5+5;
const int mod=1e9+7;
 
 
bool ispalindrome(string s)
{
    string t=s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
        if(s[i]!=t[i])
            return 0;
    return 1;
}
 
int hr;
int mi;
void convertinminute(string s)
{
    hr=0;
    mi=0;
    bool flag=0;
    for(auto it:s)
    {
        if(it==':')
        {
            flag=1;
            continue;
        }
        if(flag==0)
            hr=hr*10+it-'0';
        else 
            mi=mi*10+it-'0';
    }
}
 
 
 
int addtime(int m)
{
    int t=0;
    int ans=0;
    int flag=1;
    while(flag)
    {
        t+=m;
        mi+=m;
        hr+=mi/60;
        hr%=24;
        mi%=60;
        string s;
        if(hr<10)
            s+='0';
        s+=to_string(hr);
        if(mi<10)
            s+='0';
        s+=to_string(mi);
        ans+=ispalindrome(s);
        if(t%1440==0)
            flag=0;
    }
    return ans;
}
 
 
void solve(){
 
    string s;
    int m;
    cin>>s>>m;
    convertinminute(s);
    int ans=addtime(m);
    cout<<ans<<endl;
}
 
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
}