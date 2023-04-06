// #include <iostream>
// #include <cstring>
// using namespace std;

// int mini=1e9;
// string ans="";
// void solve(string str,int ind,int mini_ans)
// {
//     //base case
//     if(ind==str.length())
//     {
//         if(mini_ans<mini)
//         {
//             mini=mini_ans;
//             ans=str;
//             return ;
//         }
//         return ;
//     }
    
//     //small calculation and recursive calls
//     if(str[ind]=='?')
//     {
//         if(str[ind+1]=='B')
//         {
//             str[ind]='B';
//             solve(str,ind+1,mini_ans+1);
//             str[ind]='A';
//             solve(str,ind+1,mini_ans);
//             str[ind]='?';
//         }
//         else
//         {
//             str[ind]='A';
//             solve(str,ind+1,mini_ans+1);
//             str[ind]='B';
//             solve(str,ind+1,mini_ans);
//             str[ind]='?';
//         }
//         return ;
//     }
    
//     solve(str,ind+1,mini_ans);
// }
// int main() 
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
	    
// 	    string str;
// 	    cin>>str;
	    
// 	    mini=1e9;
// 	    ans=str;
	    
// 	    solve(str,0,0);
// 	    cout<<ans<<endl;
	    
// 	}
// 	return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define fast ios_base::sync_with_stdio(false);
#define input cin.tie(NULL);
#define output cout.tie(NULL);
using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
//Code by Abhinav Awasthi
//Language C++
//Practice->Success
void pr(ll n)
{
    fl(i,n)
    {
        if(i%2==0)
        cout<<"R";
        else cout<<"B";
    }
}
void pc(ll n)
{
    fl(i,n)
    {
        if(i%2==0)
        cout<<"B";
        else cout<<"R";
    }
}
void asquare()
{
    ll n,st=0,sum=0;
    char c,cc;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    fl(i,n)
    {
        if(s[i]=='?')
        {if(st==0)
        sum++;}
        else st=1;
        if(s[i]=='R')
        {
            if(sum!=0)
            {
                if(sum%2==0)
                pr(sum);
                else pc(sum);
                sum=0;
                cout<<"R";
                c='R';
            }
            else
            {
                cout<<"R";
            }
        }
        else if(s[i]=='B')
        {
            if(sum!=0)
            {
                if(sum%2==0)
                pc(sum);
                else pr(sum);
                sum=0;
                cout<<"B";
                c='B';
            }
            else
            {
                cout<<"B";
                c='B';
            }
        }
        else if(s[i]=='?')
        {
            if(i!=0)
            if(s[i-1]=='R')
            {
                cout<<"B";
                s[i]='B';
            }
            else if(s[i-1]=='B')
            {
                cout<<"R";
                s[i]='R';
            }
        }
    }  
    if(sum!=0)
    pr(sum);
    cout<<"\n";  
}
int main()
{
    fast input output
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    return 0;
}